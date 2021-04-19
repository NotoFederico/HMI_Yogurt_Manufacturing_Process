object Auth: TAuth
  Left = 674
  Top = 277
  BorderStyle = bsSingle
  Caption = 'Autenticacion de usuario'
  ClientHeight = 258
  ClientWidth = 389
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 120
  TextHeight = 16
  object Label4: TLabel
    Left = 89
    Top = 201
    Width = 38
    Height = 22
    Caption = 'User'
    Color = clGradientInactiveCaption
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlack
    Font.Height = -18
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Label5: TLabel
    Left = 89
    Top = 265
    Width = 79
    Height = 22
    Caption = 'Password'
    Color = clGradientInactiveCaption
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlack
    Font.Height = -18
    Font.Name = 'Microsoft Sans Serif'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 389
    Height = 258
    Align = alClient
    Color = clGradientInactiveCaption
    TabOrder = 0
    OnClick = Panel1Click
    object Label1: TLabel
      Left = 64
      Top = 14
      Width = 268
      Height = 29
      Alignment = taCenter
      Caption = 'Ingrese sus credenciales'
      Color = clGradientInactiveCaption
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -23
      Font.Name = 'Microsoft Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Label2: TLabel
      Left = 89
      Top = 73
      Width = 38
      Height = 22
      Caption = 'User'
      Color = clGradientInactiveCaption
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -18
      Font.Name = 'Microsoft Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Label3: TLabel
      Left = 89
      Top = 137
      Width = 79
      Height = 22
      Caption = 'Password'
      Color = clGradientInactiveCaption
      Font.Charset = ANSI_CHARSET
      Font.Color = clBlack
      Font.Height = -18
      Font.Name = 'Microsoft Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
    end
    object Shape1: TShape
      Left = 25
      Top = 48
      Width = 344
      Height = 1
    end
    object Edit1: TEdit
      Left = 89
      Top = 96
      Width = 216
      Height = 24
      TabOrder = 0
      Text = 'Ingrese su usuario'
    end
    object Edit2: TEdit
      Left = 89
      Top = 160
      Width = 216
      Height = 24
      PasswordChar = '*'
      TabOrder = 1
      Text = 'password'
    end
  end
  object Button3: TButton
    Left = 98
    Top = 208
    Width = 76
    Height = 25
    Caption = 'Ingresar'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button4: TButton
    Left = 202
    Top = 208
    Width = 75
    Height = 25
    Caption = 'Salir'
    TabOrder = 2
    OnClick = Button2Click
  end
  object Table1: TTable
    Active = True
    TableName = 'Users.DB'
    Left = 40
    Top = 200
  end
end
