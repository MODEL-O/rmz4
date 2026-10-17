// undefined FUN_080d88a8(void)
// entry 0x80d88a8


undefined4 FUN_080d88a8(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar6 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar6;
  if (0x700 < iVar6) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + (bVar1 >> 1 & 1) * 0xc00;
  sVar3 = FUN_08007c7c();
  if ((sVar3 != 0) ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    uVar4 = DAT_080d896c * *DAT_080d8968 + DAT_080d8970;
    local_1c = *(int *)(param_1 + 0x54) + (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar4 = DAT_080d896c * (uVar4 & 0x7fffffff) + DAT_080d8970;
    *DAT_080d8968 = uVar4 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + (((uVar4 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    FUN_080d0c88(2,&local_1c);
    FUN_080d8998(param_1);
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8974);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
    FUN_080d8978(param_1);
  }
  return in_lr;
}


