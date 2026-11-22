package cadastro;

import javax.swing.JOptionPane;

public class Tela extends javax.swing.JFrame {

    public Tela() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        jTextArea1 = new javax.swing.JTextArea();
        buttonGroup1 = new javax.swing.ButtonGroup();
        jLabel1 = new javax.swing.JLabel();
        RadioMoto = new javax.swing.JRadioButton();
        RadioCarro = new javax.swing.JRadioButton();
        jLabel2 = new javax.swing.JLabel();
        CampoPlaca = new javax.swing.JTextField();
        jLabel3 = new javax.swing.JLabel();
        CampoModelo = new javax.swing.JTextField();
        CampoBoxTamanho = new javax.swing.JComboBox<>();
        jLabel4 = new javax.swing.JLabel();
        CheckPernoite = new javax.swing.JCheckBox();
        CheckLavagem = new javax.swing.JCheckBox();
        CheckSeguro = new javax.swing.JCheckBox();
        jLabel5 = new javax.swing.JLabel();
        BottonCadastrar = new javax.swing.JButton();
        BottonRemover = new javax.swing.JButton();
        jScrollPane2 = new javax.swing.JScrollPane();
        Tabela = new javax.swing.JTable();

        jTextArea1.setColumns(20);
        jTextArea1.setRows(5);
        jScrollPane1.setViewportView(jTextArea1);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setText("Tipo de Veículo");

        buttonGroup1.add(RadioMoto);
        RadioMoto.setText("Moto");

        buttonGroup1.add(RadioCarro);
        RadioCarro.setText("Carro");

        jLabel2.setText("Placa");

        jLabel3.setText("Modelo");

        CampoBoxTamanho.setModel(
            new javax.swing.DefaultComboBoxModel<>(
                new String[]{"Pequeno", "Médio", "Grande"}
            )
        );

        jLabel4.setText("Tamanho");

        CheckPernoite.setText("Pernoite");
        CheckLavagem.setText("Lavagem");
        CheckSeguro.setText("Seguro Particular");

        jLabel5.setText("Opcionais");

        BottonCadastrar.setText("Cadastrar");
        BottonCadastrar.addActionListener(
            new java.awt.event.ActionListener() {
                public void actionPerformed(
                        java.awt.event.ActionEvent evt) {

                    BottonCadastrarActionPerformed(evt);
                }
            }
        );

        BottonRemover.setText("Remover");
        BottonRemover.addActionListener(
            new java.awt.event.ActionListener() {
                public void actionPerformed(
                        java.awt.event.ActionEvent evt) {

                    BottonRemoverActionPerformed(evt);
                }
            }
        );

        Tabela.setModel(new javax.swing.table.DefaultTableModel(
            new Object[][]{},
            new String[]{
                "Placa",
                "Modelo",
                "Tamanho",
                "Tipo de Veículo",
                "Opcionais"
            }
        ) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return false;
            }
        });

        jScrollPane2.setViewportView(Tabela);

        javax.swing.GroupLayout layout =
            new javax.swing.GroupLayout(getContentPane());

        getContentPane().setLayout(layout);

        layout.setHorizontalGroup(
            layout.createParallelGroup(
                javax.swing.GroupLayout.Alignment.LEADING
            )
            .addGroup(layout.createSequentialGroup()
                .addGap(20, 20, 20)

                .addGroup(layout.createParallelGroup(
                    javax.swing.GroupLayout.Alignment.LEADING)

                    .addComponent(jLabel1)
                    .addComponent(RadioMoto)
                    .addComponent(RadioCarro)

                    .addComponent(jLabel2)
                    .addComponent(CampoPlaca,
                        javax.swing.GroupLayout.PREFERRED_SIZE,
                        150,
                        javax.swing.GroupLayout.PREFERRED_SIZE)

                    .addComponent(jLabel3)
                    .addComponent(CampoModelo,
                        javax.swing.GroupLayout.PREFERRED_SIZE,
                        150,
                        javax.swing.GroupLayout.PREFERRED_SIZE)

                    .addComponent(jLabel4)
                    .addComponent(CampoBoxTamanho,
                        javax.swing.GroupLayout.PREFERRED_SIZE,
                        150,
                        javax.swing.GroupLayout.PREFERRED_SIZE)

                    .addComponent(BottonCadastrar)
                    .addComponent(BottonRemover)
                )

                .addGap(30, 30, 30)

                .addGroup(layout.createParallelGroup(
                    javax.swing.GroupLayout.Alignment.LEADING)

                    .addComponent(jLabel5)
                    .addComponent(CheckSeguro)
                    .addComponent(CheckLavagem)
                    .addComponent(CheckPernoite)

                    .addComponent(jScrollPane2,
                        javax.swing.GroupLayout.PREFERRED_SIZE,
                        450,
                        javax.swing.GroupLayout.PREFERRED_SIZE)
                )

                .addContainerGap(20, Short.MAX_VALUE))
        );

        layout.setVerticalGroup(
            layout.createParallelGroup(
                javax.swing.GroupLayout.Alignment.LEADING
            )
            .addGroup(layout.createSequentialGroup()

                .addGap(20, 20, 20)

                .addGroup(layout.createParallelGroup(
                    javax.swing.GroupLayout.Alignment.LEADING)

                    .addGroup(layout.createSequentialGroup()

                        .addComponent(jLabel1)
                        .addGap(5, 5, 5)

                        .addComponent(RadioMoto)
                        .addComponent(RadioCarro)

                        .addGap(10, 10, 10)

                        .addComponent(jLabel2)
                        .addComponent(CampoPlaca,
                            javax.swing.GroupLayout.PREFERRED_SIZE,
                            javax.swing.GroupLayout.DEFAULT_SIZE,
                            javax.swing.GroupLayout.PREFERRED_SIZE)

                        .addGap(10, 10, 10)

                        .addComponent(jLabel3)
                        .addComponent(CampoModelo,
                            javax.swing.GroupLayout.PREFERRED_SIZE,
                            javax.swing.GroupLayout.DEFAULT_SIZE,
                            javax.swing.GroupLayout.PREFERRED_SIZE)

                        .addGap(10, 10, 10)

                        .addComponent(jLabel4)
                        .addComponent(CampoBoxTamanho,
                            javax.swing.GroupLayout.PREFERRED_SIZE,
                            javax.swing.GroupLayout.DEFAULT_SIZE,
                            javax.swing.GroupLayout.PREFERRED_SIZE)

                        .addGap(20, 20, 20)

                        .addComponent(BottonCadastrar)
                        .addGap(10, 10, 10)
                        .addComponent(BottonRemover)
                    )

                    .addGroup(layout.createSequentialGroup()

                        .addComponent(jLabel5)
                        .addGap(5, 5, 5)

                        .addComponent(CheckSeguro)
                        .addComponent(CheckLavagem)
                        .addComponent(CheckPernoite)

                        .addGap(10, 10, 10)

                        .addComponent(jScrollPane2,
                            javax.swing.GroupLayout.PREFERRED_SIZE,
                            250,
                            javax.swing.GroupLayout.PREFERRED_SIZE)
                    )
                )

                .addContainerGap(20, Short.MAX_VALUE)
            )
        );

        pack();
        setLocationRelativeTo(null);
    }

    private void BottonCadastrarActionPerformed(
            java.awt.event.ActionEvent evt) {

        try {

            String placa = CampoPlaca.getText().trim();
            String modelo = CampoModelo.getText().trim();
            String tamanho =
                CampoBoxTamanho.getSelectedItem().toString();

            String tipo = "";

            if (RadioMoto.isSelected()) {
                tipo = "Moto";
            }

            if (RadioCarro.isSelected()) {
                tipo = "Carro";
            }

            String opcionais = "";

            if (CheckSeguro.isSelected()) {
                opcionais += "Seguro ";
            }

            if (CheckLavagem.isSelected()) {
                opcionais += "Lavagem ";
            }

            if (CheckPernoite.isSelected()) {
                opcionais += "Pernoite ";
            }

            // CAMPOS VAZIOS
            if (placa.isEmpty() || modelo.isEmpty()) {

                JOptionPane.showMessageDialog(
                    this,
                    "Preencha todos os campos"
                );

                return;
            }

            // RADIO BUTTON OBRIGATÓRIO
            if (!RadioMoto.isSelected()
                    && !RadioCarro.isSelected()) {

                JOptionPane.showMessageDialog(
                    this,
                    "Selecione Carro ou Moto",
                    "Aviso",
                    JOptionPane.WARNING_MESSAGE
                );

                return;
            }

            // VALIDAÇÃO PLACA
            if (placa.length() != 7) {

                throw new IllegalArgumentException(
                    "A placa deve ter 7 caracteres"
                );
            }

            javax.swing.table.DefaultTableModel model =
                (javax.swing.table.DefaultTableModel)
                Tabela.getModel();

            model.addRow(new Object[]{
                placa,
                modelo,
                tamanho,
                tipo,
                opcionais
            });

            // LIMPAR CAMPOS
            CampoPlaca.setText("");
            CampoModelo.setText("");

            buttonGroup1.clearSelection();

            CheckLavagem.setSelected(false);
            CheckPernoite.setSelected(false);
            CheckSeguro.setSelected(false);

            CampoBoxTamanho.setSelectedItem("Pequeno");

        } catch (IllegalArgumentException e) {

            JOptionPane.showMessageDialog(
                this,
                e.getMessage(),
                "Erro",
                JOptionPane.ERROR_MESSAGE
            );
        }
    }

    private void BottonRemoverActionPerformed(
            java.awt.event.ActionEvent evt) {

        int linha = Tabela.getSelectedRow();

        if (linha != -1) {

            javax.swing.table.DefaultTableModel model =
                (javax.swing.table.DefaultTableModel)
                Tabela.getModel();

            model.removeRow(linha);
        }
    }

    // Variables declaration
    private javax.swing.JButton BottonCadastrar;
    private javax.swing.JButton BottonRemover;
    private javax.swing.JComboBox<String> CampoBoxTamanho;
    private javax.swing.JTextField CampoModelo;
    private javax.swing.JTextField CampoPlaca;
    private javax.swing.JCheckBox CheckLavagem;
    private javax.swing.JCheckBox CheckPernoite;
    private javax.swing.JCheckBox CheckSeguro;
    private javax.swing.JRadioButton RadioCarro;
    private javax.swing.JRadioButton RadioMoto;
    private javax.swing.JTable Tabela;
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JTextArea jTextArea1;
}
