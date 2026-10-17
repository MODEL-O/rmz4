// undefined FUN_08002868(void)
// entry 0x8002868


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08002868(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar2 = DAT_080028cc;
  _DAT_04000000 = (ushort)DAT_080028cc[1] | (ushort)DAT_080028d0 & _DAT_04000000;
  iVar3 = (int)DAT_080028cc + DAT_080028d4;
  piVar1 = DAT_080028d8;
  for (puVar4 = (undefined4 *)*DAT_080028cc; DAT_080028d8 = piVar1, puVar4 < puVar2;
      puVar4 = puVar4 + 2) {
    *(undefined2 *)puVar4 = 0x200;
    piVar1 = DAT_080028d8;
  }
  *piVar1 = iVar3;
  piVar1[1] = 0x7000000;
  piVar1[2] = DAT_080028dc;
  *(int *)(iVar3 + 0x400) = iVar3;
  return in_lr;
}


