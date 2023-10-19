namespace Calculator
{
    public partial class XXX : Form
    {
        double plus, minus, mult, devision,b ;
        public XXX()
        {
            InitializeComponent();
            TopLabel.Text = "";

        }

        private void Num1Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num1Btn.Text;
        }

        private void Num2Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num2Btn.Text;
        }

        private void Num3Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num3Btn.Text;
        }

        private void Num4Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num4Btn.Text;
        }

        private void Num5Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num5Btn.Text;
        }

        private void Num6Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num6Btn.Text;
        }

        private void Num7Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num7Btn.Text;
        }

        private void Num8Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num8Btn.Text;
        }

        private void Num9Btn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.Num9Btn.Text;
        }

        private void ZeroBtn_Click(object sender, EventArgs e)
        {
            TopLabel.Text += this.ZeroBtn.Text;
        }

        private void PlusBtn_Click(object sender, EventArgs e)
        {
            plus = Convert.ToDouble(TopLabel.Text);
            TopLabel.Text = "";
        }

        private void MinusBtn_Click(object sender, EventArgs e)
        {
            minus = Convert.ToDouble(TopLabel.Text);
            TopLabel.Text = "";
        }

        private void MultiplBtn_Click(object sender, EventArgs e)
        {
            mult = Convert.ToDouble(TopLabel.Text);
            TopLabel.Text = "";
        }

        private void DevideBtn_Click(object sender, EventArgs e)
        {
            devision = Convert.ToDouble(TopLabel.Text);
            TopLabel.Text = "";
        }

        private void EqualsBtn_Click(object sender, EventArgs e)
        {
            if (plus != 0)
            {
                b = Convert.ToDouble(TopLabel.Text);
                TopLabel.Text = Convert.ToString(plus);
            }
            if (minus != 0)
            {
                b = Convert.ToDouble(TopLabel.Text);
                TopLabel.Text = Convert.ToString(minus );
            }
            if (mult != 0)
            {
                b = Convert.ToDouble(TopLabel.Text);
                TopLabel.Text = Convert.ToString(mult);
            }
        }

        private void DrobniyBtn_Click(object sender, EventArgs e)
        {

        }

        private void ClearBtn_Click(object sender, EventArgs e)
        {

        }
    }
}