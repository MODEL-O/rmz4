// undefined FUN_08005650(void)
// entry 0x8005650


void FUN_08005650(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  FUN_0800627c();
  iVar1 = DAT_08005670;
  if (*(char *)(DAT_08005670 + 2) == '\0') {
    *(undefined4 *)(DAT_08005670 + 0x628) = 0;
    *(undefined4 *)(iVar1 + 0x62c) = 0;
    *(undefined4 *)(iVar1 + 0x630) = 0;
    puVar2 = (undefined4 *)(DAT_0800574c + iVar1);
    FUN_080062e8(*puVar2,*(undefined4 *)(iVar1 + 0x620));
    puVar4 = (undefined4 *)(iVar1 + DAT_08005750);
    FUN_080062e8(*puVar2,*puVar4);
    puVar6 = (undefined4 *)(iVar1 + 0x608);
    puVar3 = (undefined4 *)(DAT_08005754 + iVar1);
    FUN_080062e8(*puVar6,*puVar3);
    FUN_080062e8(*puVar6,*puVar4);
    puVar5 = (undefined4 *)(iVar1 + DAT_08005758);
    FUN_080062e8(*puVar5,*(undefined4 *)(iVar1 + 0x620));
    FUN_080062e8(*puVar5,*puVar3);
    FUN_080062e8(*puVar5,*puVar4);
    puVar3 = (undefined4 *)(DAT_0800575c + iVar1);
    FUN_08006360(*puVar2,*puVar3);
    puVar4 = (undefined4 *)(iVar1 + 0x618);
    FUN_08006360(*puVar2,*puVar4);
    FUN_08006360(*puVar6,*(undefined4 *)(iVar1 + 0x610));
    FUN_08006360(*puVar6,*puVar4);
    FUN_08006360(*puVar5,*puVar3);
    FUN_08006360(*puVar5,*(undefined4 *)(iVar1 + 0x610));
    FUN_08006360(*puVar5,*puVar4);
  }
  else {
    *(char *)(DAT_08005670 + 2) = *(char *)(DAT_08005670 + 2) + -1;
  }
  return;
}


