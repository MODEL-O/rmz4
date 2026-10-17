// undefined FUN_080b5bb8(void)
// entry 0x80b5bb8


undefined4 FUN_080b5bb8(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 *local_24;
  
  local_28 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x3f);
    iVar1 = DAT_080b5c80;
    uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
    local_30 = *(undefined4 *)(param_1 + 0x54);
    local_2c = *(undefined4 *)(param_1 + 0x58);
    local_24 = (undefined1 *)(param_1 + 0x94);
    iVar7 = 0;
    iVar6 = 2;
    do {
      FUN_080d4c8c(&local_30,iVar7 + iVar1,0,uVar3 | uVar3 << 4);
      iVar7 = iVar7 + 0x1c;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *local_24 = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    psVar5 = (short *)(local_28 + 0xcc);
    if (*psVar5 != 0) {
      *psVar5 = *psVar5 + -1;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b5c84);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0x10);
  }
  return in_lr;
}


