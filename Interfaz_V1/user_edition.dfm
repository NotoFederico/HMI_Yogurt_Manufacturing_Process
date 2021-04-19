object UserEdition: TUserEdition
  Left = 475
  Top = 119
  Align = alCustom
  BorderStyle = bsSingle
  Caption = 'Modificacion de credenciales'
  ClientHeight = 370
  ClientWidth = 491
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 120
  TextHeight = 16
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 491
    Height = 370
    Align = alClient
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 1
      Top = 1
      Width = 489
      Height = 109
      Align = alTop
      Caption = 'Seleccione el usuario a modificar'
      Color = clGradientInactiveCaption
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -18
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 0
      object Label3: TLabel
        Left = 197
        Top = 79
        Width = 50
        Height = 20
        Caption = 'Label3'
        Visible = False
      end
      object ComboBox1: TComboBox
        Left = 134
        Top = 39
        Width = 228
        Height = 28
        ItemHeight = 20
        TabOrder = 0
        Text = 'Seleccione usuario'
        OnChange = ComboBox1Change
      end
    end
    object GroupBox2: TGroupBox
      Left = 1
      Top = 110
      Width = 489
      Height = 259
      Align = alClient
      Caption = 'Modifique los datos deseados'
      Color = clGradientInactiveCaption
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -18
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 1
      object Label2: TLabel
        Left = 258
        Top = 112
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
      object Label1: TLabel
        Left = 22
        Top = 112
        Width = 75
        Height = 22
        Caption = 'Jerarqu'#237'a'
        Color = clGradientInactiveCaption
        Font.Charset = ANSI_CHARSET
        Font.Color = clBlack
        Font.Height = -18
        Font.Name = 'Microsoft Sans Serif'
        Font.Style = []
        ParentColor = False
        ParentFont = False
      end
      object Label4: TLabel
        Left = 20
        Top = 30
        Width = 59
        Height = 20
        Caption = 'Nombre'
      end
      object Label5: TLabel
        Left = 256
        Top = 30
        Width = 59
        Height = 20
        Caption = 'Apellido'
      end
      object ComboBox2: TComboBox
        Left = 22
        Top = 148
        Width = 216
        Height = 28
        ItemHeight = 20
        TabOrder = 0
        Text = 'Seleccione jerarqu'#237'a'
      end
      object Button1: TButton
        Left = 89
        Top = 207
        Width = 119
        Height = 31
        Caption = 'Modificar'
        TabOrder = 1
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 286
        Top = 207
        Width = 119
        Height = 31
        Caption = 'Cerrar'
        TabOrder = 2
        OnClick = Button2Click
      end
      object Edit1: TEdit
        Left = 258
        Top = 143
        Width = 216
        Height = 24
        PasswordChar = '*'
        TabOrder = 3
        Text = 'password'
      end
      object Edit3: TEdit
        Left = 20
        Top = 57
        Width = 216
        Height = 24
        TabOrder = 4
        Text = 'Ingrese Nombre'
      end
      object Edit4: TEdit
        Left = 256
        Top = 57
        Width = 217
        Height = 24
        TabOrder = 5
        Text = 'Ingrese Apellido'
      end
    end
  end
  object Query1: TQuery
    Left = 304
    Top = 32
  end
end
