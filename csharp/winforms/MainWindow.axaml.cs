using Avalonia.Controls;
using Avalonia.Interactivity;
using MsBox.Avalonia;
using MsBox.Avalonia.Dto;
using MsBox.Avalonia.Enums;

namespace winforms;

public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            btnClickMe.Click += btnClickMe_Click;
        }

        private async void btnClickMe_Click(object sender, RoutedEventArgs e)
        {
            
            var messageBoxStandardWindow = MessageBoxManager.GetMessageBoxStandard(new MessageBoxStandardParams
            {
                ButtonDefinitions = ButtonEnum.Ok,
                ContentTitle = "Mensagem",
                ContentMessage = "Olá, Mundo!",
            });

            await messageBoxStandardWindow.ShowAsync();
        }
    }