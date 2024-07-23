namespace generics
{
    public class Genericos<T>
    {
        private T dado;
        public Genericos(T valor)
        {
            dado = valor;
        }
        public T GetDado()
        {
            return dado;
        }
        public void SetDado(T valor)
        {
            dado = valor;
        }

        public void MetodoGenerico<T>(T param)
        {

        }

        public interface IInterfaceGenerica<T>
        {
            T Metodo(T parametro);
        }

        public delegate T DelegadoGenerico<T>(T parametro);


    }
}
