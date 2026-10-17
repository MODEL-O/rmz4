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
  iVar1 = 0x030032e0;
  if (*(char *)(0x030032e0 + 2) == '\0') {
    *(undefined4 *)(0x030032e0 + 0x628) = 0;
    *(undefined4 *)(iVar1 + 0x62c) = 0;
    *(undefined4 *)(iVar1 + 0x630) = 0;
    puVar2 = (undefined4 *)(0x00000604 + iVar1);
    FUN_080062e8(*puVar2,*(undefined4 *)(iVar1 + 0x620));
    puVar4 = (undefined4 *)(iVar1 + 0x00000624);
    FUN_080062e8(*puVar2,*puVar4);
    puVar6 = (undefined4 *)(iVar1 + 0x608);
    puVar3 = (undefined4 *)(0x0000061c + iVar1);
    FUN_080062e8(*puVar6,*puVar3);
    FUN_080062e8(*puVar6,*puVar4);
    puVar5 = (undefined4 *)(iVar1 + 0x0000060c);
    FUN_080062e8(*puVar5,*(undefined4 *)(iVar1 + 0x620));
    FUN_080062e8(*puVar5,*puVar3);
    FUN_080062e8(*puVar5,*puVar4);
    puVar3 = (undefined4 *)(0x00000614 + iVar1);
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
    *(char *)(0x030032e0 + 2) = *(char *)(0x030032e0 + 2) + -1;
  }
  return;
}


