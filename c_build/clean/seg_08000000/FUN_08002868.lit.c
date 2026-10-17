// undefined FUN_08002868(void)
// entry 0x8002868


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08002868(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  puVar2 = 0x030032d0;
  _DAT_04000000 = (ushort)((undefined4 *)0x030032d0)[1] | (ushort)0x0000efff & _DAT_04000000;
  iVar3 = (int)0x030032d0 + 0xfffffc00;
  piVar1 = 0x040000d4;
  for (puVar4 = (undefined4 *)(*(undefined4 *)0x030032d0); 0x040000d4 = piVar1, puVar4 < puVar2;
      puVar4 = puVar4 + 2) {
    *(undefined2 *)puVar4 = 0x200;
    piVar1 = 0x040000d4;
  }
  *piVar1 = iVar3;
  piVar1[1] = 0x7000000;
  piVar1[2] = 0x84000100;
  *(int *)(iVar3 + 0x400) = iVar3;
  return;
}


