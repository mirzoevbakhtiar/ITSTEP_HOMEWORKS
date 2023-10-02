#region Task1MONEY

//public class Money
//{
//    public int Dollars { get; private set; }
//    public int Cents { get; private set; }

//    public Money(int dollars, int cents)
//    {
//        Dollars = dollars;
//        Cents = cents;
//    }

//    public void Print()
//    {
//        Console.WriteLine("Money: " + Dollars + '.' + Cents);
//    }

//    public void SetAmount(int dollars, int cents)
//    {
//        Dollars = dollars;
//        Cents = cents;
//    }
//}

//public class Product
//{
//    public string Name { get; private set; }
//    public Money Price { get; }

//    public Product(string name, Money price)
//    {
//        Name = name;
//        Price = price;
//    }

//    public void ReducePrice(int dollars, int cents)
//    {
//        int tempDollar = Price.Dollars;
//        int tempCents = Price.Cents;


//        tempDollar -= dollars;
//        tempCents -= cents;

//        if (tempCents < 0)
//        {
//            tempDollar -= 1;
//            tempCents += 100;
//        }

//        Price.SetAmount(tempDollar, tempCents);
//    }

//    public void AddToPrice(int dollars, int cents)
//    {
//        int tempDollar = Price.Dollars;
//        int tempCents = Price.Cents;

//        tempDollar += dollars;
//        tempCents += cents;

//        if (tempCents >= 100)
//        {
//            tempDollar += tempCents / 100;
//            tempCents %= 100;
//        }

//        Price.SetAmount(tempDollar, tempCents);
//    }
//}


#endregion

#region Task 2 Device

//class Device
//{
//    private string Name;
//    private string Description;

//    public Device(string name, string description)
//    {
//        this.Name = name;
//        this.Description = description;
//    }

//    public void Sound()
//    {
//        Console.WriteLine(Name + " emits a device sound");
//    }

//    public void Show()
//    {
//        Console.WriteLine("Device: " + Name);
//    }

//    public void Desc()
//    {
//        Console.WriteLine("Device description: " + Description);
//    }
//}

//class Kettle : Device
//{
//    public Kettle(string name, string description) : base(name, description){ }
//}

//class Microwave : Device
//{
//    public Microwave(string name, string description) : base(name, description) { }
//}

//class Car : Device
//{
//    public Car(string name, string description) : base(name, description) { }
//}

//class Ship : Device
//{
//    public Ship(string name, string description) : base(name, description) { }
//}


#endregion


#region Task3 Music 
//class MusicalInstrument
//{
//    private string Name;
//    private string Description;
//    private string history;

//    public MusicalInstrument(string name, string description, string _history)
//    {
//        this.Name = name;
//        this.Description = description;
//        this.history = _history;
//    }

//    public void Sound()
//    {
//        Console.WriteLine(Name + " emits the sound of a musical instrument");
//    }

//    public void Show()
//    {
//        Console.WriteLine("Name of the musical instrument: " + Name);
//    }

//    public void Desc()
//    {
//        Console.WriteLine("Description of a musical instrument: \n" + Description);
//    }

//    public void History()
//    {
//        Console.WriteLine("The history of the creation of a musical instrument: \n" + history);
//    }
//}

//class Violin : MusicalInstrument
//{
//    public Violin(string name, string description, string _history) : base(name, description, _history) { }
//}

//class Trombone : MusicalInstrument
//{
//    public Trombone(string name, string description, string _history) : base(name, description, _history) { }
//}

//class Ukulele : MusicalInstrument
//{
//    public Ukulele(string name, string description, string _history) : base(name, description, _history) { }
//}

//class Cello : MusicalInstrument
//{
//    public Cello(string name, string description, string _history) : base(name, description, _history) { }
//}


#endregion


#region Task4 (ne sdelal)

#endregion