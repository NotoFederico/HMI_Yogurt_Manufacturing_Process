object QuerySc: TQuerySc
  Left = 249
  Top = 108
  Width = 1326
  Height = 707
  Caption = 'Consultas y Reportes'
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
    Width = 1297
    Height = 673
    Color = clSkyBlue
    TabOrder = 0
    object Label3: TLabel
      Left = 56
      Top = 24
      Width = 160
      Height = 16
      Caption = 'Filtrar entre dos fechas'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Shape1: TShape
      Left = 304
      Top = 24
      Width = 2
      Height = 321
      Brush.Color = clBtnText
    end
    object Label1: TLabel
      Left = 16
      Top = 72
      Width = 38
      Height = 16
      Caption = 'Inicio'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 16
      Top = 128
      Width = 22
      Height = 16
      Caption = 'Fin'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 40
      Top = 248
      Width = 222
      Height = 16
      Caption = 'Filtrar por alarmas no atendidas'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object DBGrid1: TDBGrid
      Left = 16
      Top = 366
      Width = 1265
      Height = 225
      DataSource = DataSource1
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
    end
    object Button3: TButton
      Left = 159
      Top = 184
      Width = 120
      Height = 27
      Caption = 'MOSTRAR TODO'
      TabOrder = 1
      OnClick = Button3Click
    end
    object Button1: TButton
      Left = 1154
      Top = 606
      Width = 129
      Height = 31
      Caption = 'IMPRIMIR %'
      Default = True
      Enabled = False
      TabOrder = 2
      OnClick = Button1Click
    end
    object DateTimePicker1: TDateTimePicker
      Left = 72
      Top = 64
      Width = 186
      Height = 24
      CalAlignment = dtaLeft
      Date = 44173.7829241204
      Time = 44173.7829241204
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      MaxDate = 44196
      MinDate = 43831
      ParseInput = False
      TabOrder = 3
    end
    object Button7: TButton
      Left = 16
      Top = 184
      Width = 120
      Height = 27
      Caption = 'FIILTRAR'
      TabOrder = 4
      OnClick = Button7Click
    end
    object DateTimePicker2: TDateTimePicker
      Left = 72
      Top = 120
      Width = 186
      Height = 24
      CalAlignment = dtaLeft
      Date = 44174.7075403241
      Time = 44174.7075403241
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 5
    end
    object DBChart1: TDBChart
      Left = 872
      Top = 24
      Width = 409
      Height = 329
      BackWall.Brush.Color = clWhite
      BackWall.Brush.Style = bsClear
      Title.Text.Strings = (
        'Temperatura ['#176'C]')
      LeftAxis.Logarithmic = True
      Legend.Visible = False
      View3D = False
      TabOrder = 6
      object Series1: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clRed
        Title = 'TempRef'
        XLabelsSource = 'HORA'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPREF'
      end
      object Series2: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clGreen
        Title = 'TempEst'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPEST'
      end
      object Series3: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clYellow
        Title = 'TempPas'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPPAS'
      end
      object Series4: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clBlue
        Title = 'TempHom'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPHOM'
      end
      object Series5: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clWhite
        Title = 'TempPre'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPPRE'
      end
      object Series6: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clGray
        Title = 'TempInc'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPINC'
      end
      object Series7: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clFuchsia
        Title = 'TempEnf'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'TEMPENF'
      end
      object Series8: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clTeal
        Title = 'PPYog'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'PPYOG'
      end
      object Series9: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clNavy
        Title = 'PPCol'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'PPCOL'
      end
      object Series10: TLineSeries
        Marks.ArrowLength = 8
        Marks.Visible = False
        DataSource = Query1
        SeriesColor = clMaroon
        Title = 'PPCub'
        XLabelsSource = 'HORA'
        Pointer.InflateMargins = True
        Pointer.Style = psRectangle
        Pointer.Visible = False
        XValues.DateTime = False
        XValues.Name = 'X'
        XValues.Multiplier = 1
        XValues.Order = loAscending
        YValues.DateTime = False
        YValues.Name = 'Y'
        YValues.Multiplier = 1
        YValues.Order = loNone
        YValues.ValueSource = 'PPCUB'
      end
    end
    object RadioGroup1: TRadioGroup
      Left = 352
      Top = 16
      Width = 505
      Height = 337
      Align = alCustom
      Caption = 'VARIABLES ANAL'#210'GICAS'
      Columns = 2
      TabOrder = 7
      OnClick = RadioGroup1Click
    end
    object Button2: TButton
      Left = 986
      Top = 606
      Width = 129
      Height = 31
      Caption = 'IMPRIMIR '#176'C'
      Default = True
      Enabled = False
      TabOrder = 8
      OnClick = Button2Click
    end
    object Button4: TButton
      Left = 80
      Top = 288
      Width = 120
      Height = 27
      Caption = 'FILTRAR'
      TabOrder = 9
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 696
      Top = 608
      Width = 257
      Height = 31
      Caption = 'IMPRIMIR ALARMAS NO ATENDIDAS'
      Enabled = False
      TabOrder = 10
      OnClick = Button5Click
    end
    object DBGrid2: TDBGrid
      Left = 16
      Top = 366
      Width = 1265
      Height = 225
      DataSource = DataSource2
      TabOrder = 11
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Visible = False
    end
  end
  object Query1: TQuery
    SQL.Strings = (
      'select * from Variables.db order by FECHA, HORA asc')
    Left = 312
    Top = 200
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 312
    Top = 176
  end
  object Query2: TQuery
    SQL.Strings = (
      'select * from Eventos.db order by FECHA, HORA asc')
    Left = 313
    Top = 272
  end
  object DataSource2: TDataSource
    DataSet = Query2
    Left = 312
    Top = 240
  end
end
