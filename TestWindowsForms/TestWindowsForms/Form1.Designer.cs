namespace TestWindowsForms
{
    partial class FormFenetre
    {
        /// <summary>
        /// Variable nécessaire au concepteur.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Nettoyage des ressources utilisées.
        /// </summary>
        /// <param name="disposing">true si les ressources managées doivent être supprimées ; sinon, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Code généré par le Concepteur Windows Form

        /// <summary>
        /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
        /// le contenu de cette méthode avec l'éditeur de code.
        /// </summary>
        private void InitializeComponent()
        {
            this.btnTest = new System.Windows.Forms.Button();
            this.lblLigne1 = new System.Windows.Forms.Label();
            this.lblAncien = new System.Windows.Forms.Label();
            this.lblLigne2 = new System.Windows.Forms.Label();
            this.txtNouveau = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // btnTest
            // 
            this.btnTest.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.btnTest.Location = new System.Drawing.Point(114, 122);
            this.btnTest.Name = "btnTest";
            this.btnTest.Size = new System.Drawing.Size(75, 23);
            this.btnTest.TabIndex = 0;
            this.btnTest.Text = "Clique-moi";
            this.btnTest.UseVisualStyleBackColor = true;
            this.btnTest.Click += new System.EventHandler(this.btnTest_Click);
            // 
            // lblLigne1
            // 
            this.lblLigne1.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.lblLigne1.AutoSize = true;
            this.lblLigne1.Location = new System.Drawing.Point(21, 26);
            this.lblLigne1.Name = "lblLigne1";
            this.lblLigne1.Size = new System.Drawing.Size(90, 13);
            this.lblLigne1.TabIndex = 1;
            this.lblLigne1.Text = "Ancienne valeur :";
            // 
            // lblAncien
            // 
            this.lblAncien.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.lblAncien.AutoSize = true;
            this.lblAncien.Location = new System.Drawing.Point(111, 26);
            this.lblAncien.Name = "lblAncien";
            this.lblAncien.Size = new System.Drawing.Size(0, 13);
            this.lblAncien.TabIndex = 2;
            // 
            // lblLigne2
            // 
            this.lblLigne2.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.lblLigne2.AutoSize = true;
            this.lblLigne2.Location = new System.Drawing.Point(21, 73);
            this.lblLigne2.Name = "lblLigne2";
            this.lblLigne2.Size = new System.Drawing.Size(87, 13);
            this.lblLigne2.TabIndex = 3;
            this.lblLigne2.Text = "Nouvelle valeur :";
            // 
            // txtNouveau
            // 
            this.txtNouveau.Anchor = System.Windows.Forms.AnchorStyles.None;
            this.txtNouveau.Location = new System.Drawing.Point(114, 70);
            this.txtNouveau.Name = "txtNouveau";
            this.txtNouveau.Size = new System.Drawing.Size(100, 20);
            this.txtNouveau.TabIndex = 4;
            this.txtNouveau.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtNouveau_KeyPress);
            // 
            // FormFenetre
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(302, 227);
            this.Controls.Add(this.txtNouveau);
            this.Controls.Add(this.lblLigne2);
            this.Controls.Add(this.lblAncien);
            this.Controls.Add(this.lblLigne1);
            this.Controls.Add(this.btnTest);
            this.Name = "FormFenetre";
            this.Text = "Application de test";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button btnTest;
        private System.Windows.Forms.Label lblLigne1;
        private System.Windows.Forms.Label lblAncien;
        private System.Windows.Forms.Label lblLigne2;
        private System.Windows.Forms.TextBox txtNouveau;
    }
}

