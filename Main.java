
//1st pattern
/*
package com.FirstP;

public class Main {

    public static void main(String[] args) {

        int i,j;

        for (i=0;i<5;i++){

            for(j=0;j<5;j++){
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
}
 */

//2nd pattern

/*
package com.FirstP;

public class Main{

    public static void main(String[] args) {

        int i,j,k;

        for (i=0;i<5;i++){

            for (j=5;j>i;j--)
            {
                System.out.print(" ");
            }
            for (k=0;k<5;k++)
            {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}

 */

//3rd pattern

/*

package com.FirstP;

public class Main{

    public static void main(String[] args) {

        int i,j,k;

        for (i=0;i<5;i++)
        {
            for (j=0;j<i;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

 */

//4th pattern

/*

package com.FirstP;

public class Main{

    public static void main(String[] args) {

        int i,j;

        for (i=0;i<5;i++)
        {
            for (j=5;j>i;j--)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

 */

//5th pattern

/*

package com.FirstP;

public class Main{

    public static void main(String[] args) {

        int i,j,k;

        for (i=0;i<5;i++)
        {
            for (j=5;j>0;j--)
            {
                System.out.print(" ");
            }
            for (k=0;k<i;k++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

 */

//6th pattern

/*

package com.FirstP;

public class Main{

    public static void main(String[] args) {

        int i,j,k;

        for (i=0;i<5;i++)
        {
            for (j=0;j<i;j++)
            {
                System.out.print(" ");
            }
            for (k=5;k>i;k--)
            {
                System.out.print("*");
            }

            System.out.println();
        }
    }
}
 */

//7th pattern

package com.FirstP;

public class Main{

    public static void main(String[] args) {

        int i,j,k;

        for (i=0;i<5;i++)
        {
            for (j=0;j<5;j++)
            {
                if (i==0||i==4||j==0||j==4)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}