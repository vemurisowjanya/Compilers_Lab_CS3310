import com.sun.org.apache.bcel.internal.generic.ARRAYLENGTH;
import com.sun.xml.internal.bind.v2.runtime.unmarshaller.XsiNilLoader.Array;

public class P {
	public int primesum(int a) {
		int A=a,i,j;
		int result=0;
		int[] l = new int[A+1];
		for (i=0;i<A+1;i++)
		{
			l[i]=1;
		}
		l[0] = 0;
		l[1] = 0;
		int n = (int)(Math.sqrt(A));
		for(j=2;j<n;j++){
			i = 2;
			while(i*j<=A)
			{
				l[i*j] = 0;
				i+=1;

			}
			for(i=2;i<A;i++)
			{
				if(l[i]==1 && l[A-i]==1)
				{
					return result;
				}

			}
		}
		return result;
	}
}
