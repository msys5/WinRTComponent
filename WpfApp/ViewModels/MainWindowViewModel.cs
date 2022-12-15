using Prism.Mvvm;
using System.Diagnostics;

namespace WpfApp.ViewModels
{
	public class MainWindowViewModel : BindableBase
	{
		private string _title = "Prism Application";
		public string Title
		{
			get { return _title; }
			set { SetProperty(ref _title, value); }
		}

		public MainWindowViewModel()
		{
			var calc = new Component.Calculator();
			int r = calc.Add(100, 55);

			Debug.WriteLine(r);
		}
	}
}
