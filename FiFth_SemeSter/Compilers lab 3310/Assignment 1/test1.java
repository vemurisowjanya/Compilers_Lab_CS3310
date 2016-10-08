#define NUM() (10+0)
#define ONE(arg1,arg2) (arg1+arg2)
#define ABC(arg3,arg4,arg5) {System.out.println(arg3);System.out.println(arg4);System.out.println(arg5);}
class Factorial{
    public static void main(String[] a){
        System.out.println(new Fac().ComputeFac(NUM()));
    }
}
/*kjerhgierng
fkjerhget
krehge*/
class Fac {
    public int ComputeFac(int num){
        int num_aux ;
        if ((num <= 1)&&(num != 1))
          x = ONE(1,0);
        else
            num_aux = num * (this.ComputeFac(num-1)) ;
        return num_aux ;
    }
}