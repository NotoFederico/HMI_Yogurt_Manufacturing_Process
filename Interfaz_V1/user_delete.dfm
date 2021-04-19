object UserDelete: TUserDelete
  Left = 806
  Top = 275
  Align = alCustom
  BorderStyle = bsSingle
  Caption = 'Borrar usuario'
  ClientHeight = 147
  ClientWidth = 254
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
    Width = 254
    Height = 147
    Align = alClient
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 1
      Top = 1
      Width = 252
      Height = 145
      Align = alClient
      Caption = 'Seleccione usuario a eliminar'
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
        Left = 33
        Top = 43
        Width = 177
        Height = 24
        ItemHeight = 16
        TabOrder = 0
        Text = 'Seleccione usuario'
      end
      object Button2: TButton
        Left = 133
        Top = 96
        Width = 97
        Height = 25
        Caption = 'Cerrar'
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button1: TButton
        Left = 13
        Top = 96
        Width = 97
        Height = 25
        Caption = 'Eliminar'
        TabOrder = 2
        OnClick = Button1Click
      end
    end
  end
  object Query1: TQuery
    Left = 216
    Top = 16
  end
end
