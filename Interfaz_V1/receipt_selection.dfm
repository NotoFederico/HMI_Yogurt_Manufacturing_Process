object ReceiptSelection: TReceiptSelection
  Left = 590
  Top = 99
  Align = alCustom
  BorderStyle = bsSingle
  Caption = 'Elegir Receta'
  ClientHeight = 198
  ClientWidth = 372
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
    Width = 372
    Height = 198
    Align = alClient
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 1
      Top = 1
      Width = 370
      Height = 196
      Align = alClient
      Caption = 'Seleccione la receta a producir'
      Color = clGradientInactiveCaption
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -18
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 0
      object Label1: TLabel
        Left = 32
        Top = 32
        Width = 4
        Height = 20
        Visible = False
      end
      object ComboBox1: TComboBox
        Left = 30
        Top = 59
        Width = 316
        Height = 28
        ItemHeight = 20
        TabOrder = 0
        Text = 'Seleccione Receta'
      end
      object Button2: TButton
        Left = 236
        Top = 128
        Width = 120
        Height = 31
        Caption = 'Cerrar'
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button1: TButton
        Left = 10
        Top = 128
        Width = 119
        Height = 31
        Caption = 'Cargar'
        TabOrder = 2
        OnClick = Button1Click
      end
    end
  end
  object DataSource1: TDataSource
    Left = 152
    Top = 128
  end
  object ClientDataSet1: TClientDataSet
    Aggregates = <>
    Params = <>
    Left = 192
    Top = 128
  end
end
