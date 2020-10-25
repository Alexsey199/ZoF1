пакет com.пример.ТВЗ;

импорт android.Содержание.Намерение;
импорт android.Поддержка.v7.апп.AppCompatActivity;
импорт android.ос.Пучок;
импорт android.Вид.Меню;
импорт android.Вид.Посмотреть;
импорт android.виджет.Кнопка;

public class MainActivity расширяет AppCompatActivity реализует представление.OnClickListener {
    Кнопка btnActTwo;


    @Ручная коррекция
    protected void onCreate(Bundle savedInstanceState) {
        супер.onCreate(savedInstanceState);
 setContentView (R.макет.activity_main);

 btnActTwo = (кнопка) findViewById(R.удостоверениеличности .btnActTwo);
 btnActTwo.setOnClickListener (это);

    }

    @Ручная коррекция
    public void onClick(просмотр v) {
        переключатель (v.getId()) {
            дело Р.удостоверениеличности .btnActTwo:

                Намерение намерение = новое намерение(это, MainActivity2.класс);
 startActivity (намерение);
                перерыв;
            по умолчанию:
                перерыв;

        }
    }

    @Ручная коррекция
    public boolean onCreateOptionsMenu(меню Меню){
 getMenuInflater().надуть(Р.меню.menu_main, меню);
        return true;
    }
}
