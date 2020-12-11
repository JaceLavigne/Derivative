#ifndef menu_h
#define menu_h
using namespace std;

//declaring the variables and functions used
double b,c,d,e,f,g,h,i,j,k,l;
int terms;
void runDerivative();
int customTerms();
void runSimpson();
void runTrapezoid();
double f1();
double derivative();
double Simpson();
double Trapezoid();

//starts the menu so the person can choose what they want to do
int menu(){
char x;
cout<<"what do you want to find?\n(A)Derivative\n(B)Integral using Simpson Rule\n(C)Integral using Trapezoid Method\n";
cin>>x;
//switch case to handle what the person enters
switch(x){
  case 'a':
    runDerivative();
    break;
  case 'b':
    runSimpson();
    break;
  case 'c':
    runTrapezoid();
    break;
  case 'A':
    runDerivative();
    break;
  case 'B':
    runSimpson();
    break;
  case 'C':
    runTrapezoid();
    break;
  default:
    cout<<"Enter a, b, or c\n";
    menu();
    break;
}
return 0;
}

//main function to figure out what equation to use
void runDerivative(){
  cout<<"What type of equation do you want to find the derivative of?\n(A)Quadratic\n(B)Cubic\n(C)Quartic\n(D)Custom number of terms(Up to 10)\n";
  char a;
  cin>>a;
  switch(a){
    case 'a':
    //quadratic
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^2 + second*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      cout<<derivative()<<endl;
      break;
    case 'b':
    //cubic
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^3 + second*x^2 + third*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      cout<<derivative()<<endl;
      break;
    case 'c':
    //quartic
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^4 + second*x^3 + third*x^2 + fourth*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      cout<<derivative()<<endl;
      break;
    case 'd':
    //allows the user to enter terms
      customTerms();
      cout<<derivative()<<endl;
      break;
    case 'A':
    //quadratic
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^2 + second*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      cout<<derivative()<<endl;
      break;
    case 'B':
    //cubic
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^3 + second*x^2 + third*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      cout<<derivative()<<endl;
      break;
    case 'C':
    //quartic
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^4 + second*x^3 + third*x^2 + fourth*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      cout<<derivative()<<endl;
      break;
    case 'D':
    //allows the user to enter terms
      customTerms();
      cout<<derivative()<<endl;
      break;
    default:
    //fail-safe
      cout<<"Enter a, b, c, or d\n";
      runDerivative();
  }
}
//runs the simpson rule integral method
void runSimpson(){
  //same thing as before-quadratic, cubic, etc...
  cout<<"What type of equation do you want to find the integral of?\n(A)Quadratic\n(B)Cubic\n(C)Quartic\n(D)Custom number of terms(Up to 10)\n";
  char a;
  cin>>a;
  switch(a){
    case 'a':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^2 + second*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      cout<<Simpson()<<endl;
      break;
    case 'b':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^3 + second*x^2 + third*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      cout<<Simpson()<<endl;
      break;
    case 'c':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^4 + second*x^3 + third*x^2 + fourth*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      cout<<Simpson()<<endl;
      break;
    case 'd':
      customTerms();
      cout<<Trapezoid()<<endl;
      break;
    case 'A':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^2 + second*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      cout<<Simpson()<<endl;
      break;
    case 'B':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^3 + second*x^2 + third*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      cout<<Simpson()<<endl;
      break;
    case 'C':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^4 + second*x^3 + third*x^2 + fourth*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      cout<<Simpson()<<endl;
      break;
    case 'D':
      customTerms();
      cout<<Simpson()<<endl;
      break;
    default:
      cout<<"Enter a, b, c, or d\n";
      runSimpson();
  }
}

void runTrapezoid(){
  //same thing once again. This can probably be compressed, this will be something I can maybe add on to.
  cout<<"What type of equation do you want to find the integral of?\n(A)Quadratic\n(B)Cubic\n(C)Quartic\n(D)Custom number of terms(Up to 10)\n";
  char a;
  cin>>a;
  switch(a){
    case 'a':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^2 + second*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      cout<<Trapezoid()<<endl;
      break;
    case 'b':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^3 + second*x^2 + third*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      cout<<Trapezoid()<<endl;
      break;
    case 'c':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^4 + second*x^3 + third*x^2 + fourth*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      cout<<Trapezoid()<<endl;
      break;
    case 'd':
      customTerms();
      cout<<Trapezoid()<<endl;
      break;
    case 'A':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^2 + second*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      cout<<Trapezoid()<<endl;
      break;
    case 'B':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^3 + second*x^2 + third*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      cout<<Trapezoid()<<endl;
      break;
    case 'C':
      cout<<"\nEnter coefficients of terms with the highest power\nfirst, then going down by 1 power each time.\n\n(EX: first*x^4 + second*x^3 + third*x^2 + fourth*x + constant)\n\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      cout<<Trapezoid()<<endl;
      break;
    case 'D':
      customTerms();
      cout<<Trapezoid()<<endl;
      break;
    default:
      cout<<"Enter a, b, c, or d\n";
      runSimpson();
  }
}

//the function that the derivative and integral both use
double f1(double x){
  return x*(x*(x*(x*(x*(x*(x*(x*((b*x)+c)+d)+e)+f)+g)+h)+i)+j)+k;
}

double derivative(){
  //the magic for the derivative
  cout<<"for what value of x do you want to find the derivative?"<<endl;
  double x;
  cin>>x;
  double der;
  double z=10;
  do{
    der=((f1(x+z)-f1(x))/z);
    z=z/2;
  }while(z>0.0000000001);
  return der;
}

int customTerms(){
  //the custom amount of terms handler. It's the code that does all the heavy lifting for it.
  int terms;
  cout<<"Enter the number of terms: ";
  cin>>terms;
  while(!cin || terms>10){
    cin.clear();
    cin.ignore();
    cout<<"Enter a number 1-10: ";
    cin>>terms;
  }
  switch(terms){
    case 1:
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      i=0;
      j=0;
    break;
    case 2:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
      i=0;
    break;
    case 3:
      cout<<"Enter the coefficients of the terms\n";      cout<<"Enter the first term: ";
      cin>>i;
      cout<<"Enter the second term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
      h=0;
    break;
    case 4:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>h;
      cout<<"Enter the second term: ";
      cin>>i;
      cout<<"Enter the third term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
      g=0;
    break;
    case 5:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>g;
      cout<<"Enter the second term: ";
      cin>>h;
      cout<<"Enter the third term: ";
      cin>>i;
      cout<<"Enter the fourth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
      f=0;
    break;
    case 6:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>f;
      cout<<"Enter the second term: ";
      cin>>g;
      cout<<"Enter the third term: ";
      cin>>h;
      cout<<"Enter the fourth term: ";
      cin>>i;
      cout<<"Enter the fifth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
      e=0;
    break;
    case 7:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>e;
      cout<<"Enter the second term: ";
      cin>>f;
      cout<<"Enter the third term: ";
      cin>>g;
      cout<<"Enter the fourth term: ";
      cin>>h;
      cout<<"Enter the fifth term: ";
      cin>>i;
      cout<<"Enter the sixth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
      d=0;
    break;
    case 8:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>d;
      cout<<"Enter the second term: ";
      cin>>e;
      cout<<"Enter the third term: ";
      cin>>f;
      cout<<"Enter the fourth term: ";
      cin>>g;
      cout<<"Enter the fifth term: ";
      cin>>h;
      cout<<"Enter the sixth term: ";
      cin>>i;
      cout<<"Enter the seventh term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
      c=0;
    break;
    case 9:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>c;
      cout<<"Enter the second term: ";
      cin>>d;
      cout<<"Enter the third term: ";
      cin>>e;
      cout<<"Enter the fourth term: ";
      cin>>f;
      cout<<"Enter the fifth term: ";
      cin>>g;
      cout<<"Enter the sixth term: ";
      cin>>h;
      cout<<"Enter the seventh term: ";
      cin>>i;
      cout<<"Enter the eighth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
      b=0;
    break;
    case 10:
      cout<<"Enter the coefficients of the terms\n";
      cout<<"Enter the first term: ";
      cin>>b;
      cout<<"Enter the second term: ";
      cin>>c;
      cout<<"Enter the third term: ";
      cin>>d;
      cout<<"Enter the fourth term: ";
      cin>>e;
      cout<<"Enter the fifth term: ";
      cin>>f;
      cout<<"Enter the sixth term: ";
      cin>>g;
      cout<<"Enter the seventh term: ";
      cin>>h;
      cout<<"Enter the eighth term: ";
      cin>>i;
      cout<<"Enter the ninth term: ";
      cin>>j;
      cout<<"Enter the constant: ";
      cin>>k;
    break;
}
return terms;
}

double Simpson(){
  //integral using simpson's 1/3 rule.
  double lower, upper;
  int sections;
  cout<<"Enter the lower x boundary: ";
  cin>>lower;
  cout<<"Enter the upper x boundary: ";
  cin>>upper;
  cout<<"Enter the number of sections(Whole Numbers)\nTip: Larger numbers are more accurate, up to 10,000\n";
  cin>>sections;
  while(sections<0&&sections>10001){
    cin.clear();
    cin.ignore();
    cout<<"Enter a positive integer up to 10,000: ";
    cin>>sections;
  };
  double h, sum=0;
  int i;
  h=(upper-lower)/sections;
  sum+=f1(lower)+f1(upper);
  for(i=1; i<sections; i+=2){
    sum+=(f1(lower+i*h)*4);
  }
  for(i=2; i<sections-1; i+=2){
    sum+=(f1(lower+i*h)*2);
  }
  sum=sum*(h/3);
  return sum;
}

double Trapezoid(){
  //code to handle the trapezoid rule version
  double lower, upper;
  int sections;
  cout<<"Enter the lower x boundary: ";
  cin>>lower;
  cout<<"Enter the upper x boundary: ";
  cin>>upper;
  cout<<"Enter the number of sections(Whole Numbers)\nTip: Larger numbers are more accurate, up to 10,000\n";
  cin>>sections;
  while(sections<0&&sections>10001){
    cin.clear();
    cin.ignore();
    cout<<"Enter a positive integer up to 10,000: ";
    cin>>sections;
  };
  double h, sum=0;
  int i;
  h=(upper-lower)/sections;
  sum+=f1(lower)+f1(upper);
  for(i=1; i<sections; i++){
    sum+=(f1(lower+(i*h))*2);
  }
  sum=sum*(h/2);
  return sum;
}

#endif
