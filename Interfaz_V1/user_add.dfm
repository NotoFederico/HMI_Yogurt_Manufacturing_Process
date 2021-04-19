object UserAdd: TUserAdd
  Left = 363
  Top = 271
  Align = alCustom
  BorderStyle = bsSingle
  Caption = 'Agregar usuario'
  ClientHeight = 220
  ClientWidth = 462
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -10
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 462
    Height = 220
    Align = alClient
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 1
      Top = 1
      Width = 460
      Height = 218
      Align = alClient
      Caption = 'Agregue datos del nuevo usuario'
      Color = clGradientInactiveCaption
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 0
      object Label3: TLabel
        Left = 240
        Top = 87
        Width = 67
        Height = 18
        Caption = 'Password'
        Color = clGradientInactiveCaption
        Font.Charset = ANSI_CHARSET
        Font.Color = clBlack
        Font.Height = -15
        Font.Name = 'Microsoft Sans Serif'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label2: TLabel
        Left = 32
        Top = 83
        Width = 32
        Height = 18
        Caption = 'User'
        Color = clGradientInactiveCaption
        Font.Charset = ANSI_CHARSET
        Font.Color = clBlack
        Font.Height = -15
        Font.Name = 'Microsoft Sans Serif'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label1: TLabel
        Left = 32
        Top = 147
        Width = 61
        Height = 18
        Caption = 'Jerarqu'#237'a'
        Color = clGradientInactiveCaption
        Font.Charset = ANSI_CHARSET
        Font.Color = clBlack
        Font.Height = -15
        Font.Name = 'Microsoft Sans Serif'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label4: TLabel
        Left = 32
        Top = 24
        Width = 49
        Height = 16
        Caption = 'Nombre'
      end
      object Label5: TLabel
        Left = 248
        Top = 24
        Width = 50
        Height = 16
        Caption = 'Apellido'
      end
      object Button2: TButton
        Left = 352
        Top = 176
        Width = 97
        Height = 25
        Caption = 'Cerrar'
        TabOrder = 0
        OnClick = Button2Click
      end
      object Button1: TButton
        Left = 248
        Top = 176
        Width = 97
        Height = 25
        Caption = 'Agregar'
        TabOrder = 1
        OnClick = Button1Click
      end
      object Edit2: TEdit
        Left = 240
        Top = 106
        Width = 176
        Height = 24
        PasswordChar = '*'
        TabOrder = 2
        Text = 'password'
      end
      object Edit1: TEdit
        Left = 32
        Top = 102
        Width = 176
        Height = 24
        TabOrder = 3
        Text = 'Ingrese Nombre de Usuario'
      end
      object ComboBox1: TComboBox
        Left = 32
        Top = 168
        Width = 177
        Height = 24
        ItemHeight = 16
        TabOrder = 4
        Text = 'Seleccione jerarqu'#237'a'
      end
      object Edit3: TEdit
        Left = 32
        Top = 46
        Width = 176
        Height = 24
        TabOrder = 5
        Text = 'Ingrese Nombre'
      end
      object Edit4: TEdit
        Left = 240
        Top = 46
        Width = 176
        Height = 24
        TabOrder = 6
        Text = 'Ingrese Apellido'
      end
    end
  end
  object Query1: TQuery
    Left = 352
    Top = 16
  end
end
