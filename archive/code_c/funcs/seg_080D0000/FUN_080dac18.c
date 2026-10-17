// undefined FUN_080dac18(void)
// entry 0x80dac18


undefined4 FUN_080dac18(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint local_1c;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  iVar4 = DAT_080dad00;
  iVar3 = DAT_080dacfc;
  puVar1 = DAT_080dacf8;
  uVar2 = DAT_080dacfc * *DAT_080dacf8 + DAT_080dad00;
  local_24 = *(int *)(param_1 + 0x54) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar2 = DAT_080dacfc * (uVar2 & 0x7fffffff) + DAT_080dad00;
  *DAT_080dacf8 = uVar2 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  FUN_080d0c88(1,&local_24);
  local_1c = *(byte *)(param_1 + 10) >> 4 & 1;
  local_24 = *(int *)(param_1 + 0x54);
  local_20 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = iVar3 * *puVar1 + iVar4;
  iVar6 = ((uVar2 & 0x7fffffff) >> 0x10 & 1) + 1;
  uVar2 = iVar3 * (uVar2 & 0x7fffffff) + iVar4;
  *puVar1 = uVar2 & 0x7fffffff;
  iVar3 = FUN_08129198((uVar2 & 0x7fffffff) >> 0x10,3);
  if (iVar6 != 0) {
    uVar2 = local_1c | local_1c << 4;
    do {
      iVar4 = FUN_08129050(iVar6 + iVar3,3);
      FUN_080d4c8c(&local_24,iVar4 * 0x1c + DAT_080dad04,0,uVar2 & 0xff);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080dad08);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0x10);
  return in_lr;
}


