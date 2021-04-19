object Comms: TComms
  Left = 768
  Top = 341
  Width = 235
  Height = 236
  Caption = 'TCP/IP'
  Color = 15325931
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label1: TLabel
    Left = 10
    Top = 10
    Width = 97
    Height = 16
    Caption = 'Conectar con IP:'
  end
  object Label2: TLabel
    Left = 20
    Top = 69
    Width = 57
    Height = 16
    Caption = 'Port TCP:'
  end
  object Label3: TLabel
    Left = 10
    Top = 135
    Width = 46
    Height = 16
    Caption = 'Estado:'
  end
  object Label4: TLabel
    Left = 10
    Top = 155
    Width = 88
    Height = 16
    Caption = '- - - - - - - - - - - - -'
  end
  object Edit1: TEdit
    Left = 10
    Top = 30
    Width = 168
    Height = 24
    TabOrder = 0
    Text = '127.0.0.1'
  end
  object Edit2: TEdit
    Left = 98
    Top = 59
    Width = 80
    Height = 24
    TabOrder = 1
    Text = '7777'
  end
  object Button1: TButton
    Left = 10
    Top = 98
    Width = 70
    Height = 31
    Caption = 'Conectar'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button3: TButton
    Left = 89
    Top = 98
    Width = 89
    Height = 31
    Caption = 'Desconectar'
    TabOrder = 3
    OnClick = Button3Click
  end
  object ClientSocket1: TClientSocket
    Active = False
    ClientType = ctNonBlocking
    Port = 0
    OnConnect = ClientSocket1Connect
    OnDisconnect = ClientSocket1Disconnect
    OnError = ClientSocket1Error
    Left = 184
    Top = 32
  end
end
