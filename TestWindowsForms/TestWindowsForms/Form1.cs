using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace TestWindowsForms
{
    public partial class FormFenetre : Form
    {
        public FormFenetre()
        {
            InitializeComponent();
        }

        private void btnTest_Click(object sender, EventArgs e)
        {
            
            if (this.txtNouveau.Text.Length == 0)
            {
                DialogResult choix = MessageBox.Show(this, "La nouvelle valeur est vide. Continuer quand même ?", "Champ vide", MessageBoxButtons.YesNo, MessageBoxIcon.Warning);
                if (choix == DialogResult.Yes) this.lblAncien.Text = "";
            }
            else
            {
                this.lblAncien.Text = this.txtNouveau.Text;
            }

            if (sender == this.txtNouveau) this.txtNouveau.Text = "";
        }

        private void txtNouveau_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == (char)Keys.Return)
            {
                e.Handled = true;
                btnTest_Click(sender, null);
            }
        }

       
    }
}
