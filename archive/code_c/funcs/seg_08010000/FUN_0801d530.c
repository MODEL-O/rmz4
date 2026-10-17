// undefined FUN_0801d530(void)
// entry 0x801d530


undefined4 FUN_0801d530(byte param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_0801d5b0;
  *(ushort *)(DAT_0801d5b0 + DAT_0801d5b4) = param_2 & 0xff;
  iVar2 = DAT_0801d5b8;
  *(undefined2 *)(iVar1 + DAT_0801d5b8) = 0;
  *(byte *)(iVar1 + iVar2 + 2) = param_1;
  *(undefined2 *)(iVar1 + DAT_0801d5bc) = 1;
  *(undefined4 *)(iVar1 + DAT_0801d5c0) = DAT_0801d5c4;
  *(undefined4 *)(iVar1 + 0x460) = DAT_0801d5c8;
  *(undefined1 *)(iVar1 + DAT_0801d5cc) = 0xff;
  *(undefined2 *)(iVar1 + DAT_0801d5d0) = 0;
  FUN_0801e17c();
  puVar3 = (undefined4 *)(iVar1 + 0x80);
  do {
    *puVar3 = 0xffffffff;
    puVar3 = puVar3 + -1;
  } while (iVar1 <= (int)puVar3);
  *(undefined4 *)(iVar1 + DAT_0801d5d4) = *(undefined4 *)((uint)param_1 * 4 + DAT_0801d5d8);
  *(undefined4 *)(iVar1 + 0x458) = *(undefined4 *)((uint)param_1 * 4 + DAT_0801d5dc);
  return in_lr;
}


