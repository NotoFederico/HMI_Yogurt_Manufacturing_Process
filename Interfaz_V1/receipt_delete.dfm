object ReceiptDelete: TReceiptDelete
  Left = 620
  Top = 180
  Align = alCustom
  BorderStyle = bsSingle
  Caption = 'Eliminar Receta'
  ClientHeight = 153
  ClientWidth = 342
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
    Width = 342
    Height = 153
    Align = alClient
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 1
      Top = 1
      Width = 340
      Height = 151
      Align = alClient
      Caption = 'Seleccione la receta a producir'
      Color = clGradientInactiveCaption
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      TabOrder = 0
      object ComboBox1: TComboBox
        Left = 41
        Top = 51
        Width = 257
        Height = 24
        ItemHeight = 16
        TabOrder = 0
        Text = 'Seleccione Receta'
      end
      object Button2: TButton
        Left = 195
        Top = 104
        Width = 98
        Height = 25
        Caption = 'Cerrar'
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button1: TButton
        Left = 52
        Top = 104
        Width = 97
        Height = 25
        Caption = 'Eliminar'
        TabOrder = 2
        OnClick = Button1Click
      end
    end
  end
end
