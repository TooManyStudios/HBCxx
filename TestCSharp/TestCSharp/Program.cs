using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading; // pour Thread.Sleep
using System.Diagnostics; // pour Stopwatch

namespace TestCSharp
{
    class Program
    {

        static void testerTimers()
        {
            Stopwatch stopwatch = Stopwatch.StartNew();
            Thread.Sleep(0);
            stopwatch.Stop();
            Console.WriteLine(stopwatch.ElapsedMilliseconds);
            Console.WriteLine(DateTime.Now.ToLongTimeString());

            stopwatch = Stopwatch.StartNew();
            Thread.Sleep(5000);
            stopwatch.Stop();
            Console.WriteLine(stopwatch.ElapsedMilliseconds);
            Console.WriteLine(DateTime.Now.ToLongTimeString());

            stopwatch = Stopwatch.StartNew();
            System.Threading.Thread.Sleep(1000);
            stopwatch.Stop();
            Console.WriteLine(stopwatch.ElapsedMilliseconds);

            //
            // Bonus: shows SpinWait method.
            //
            stopwatch = Stopwatch.StartNew();
            Thread.SpinWait(1000 * 1000 * 1000); // 1 milliard d'opérations
            stopwatch.Stop();
            Console.WriteLine(stopwatch.ElapsedMilliseconds);
        }

        static void jeuDuNombreATrouver()
        {
            string s = "Hello. ";
            Console.Write(s);

            Random random = new Random();
            int valeurATrouver = random.Next(1, 101);
            int valeurEntree, nbEssais = 0;
            string entree; bool entreeValide;
            do
            {
                Console.Write("Entrez un nombre : ");
                entree = Console.ReadLine();
                entreeValide = Int32.TryParse(entree, out valeurEntree);
                if (entreeValide)
                {
                    if (valeurATrouver > valeurEntree) Console.Write("C'est plus. ");
                    if (valeurATrouver < valeurEntree) Console.Write("C'est moins. ");
                    nbEssais++;
                }
                else
                {
                    Console.Write("Entrée non valide. ");
                }

            } while (valeurATrouver != valeurEntree);
            Console.WriteLine("C'était " + valeurEntree + ", trouvé en " + nbEssais + " coups");
        }

       

        static void Main(string[] args)
        {
            //testerTimers();
            jeuDuNombreATrouver();

            Console.ReadLine();
        }
    }
}
