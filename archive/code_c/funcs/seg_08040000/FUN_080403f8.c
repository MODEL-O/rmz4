// undefined FUN_080403f8(void)
// entry 0x80403f8


undefined4 FUN_080403f8(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar6 + 0xfa) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040440);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if (1 < bVar2) {
      FUN_08040034(param_1,iVar6,1,0);
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    cVar1 = FUN_0803a99c(param_1,1);
    if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
      return in_lr;
    }
    if (cVar1 != -1) {
      FUN_08002b10(0x3f);
      uVar5 = *DAT_0804050c * DAT_08040510 + DAT_08040514;
      *DAT_0804050c = uVar5 & 0x7fffffff;
      bVar2 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,6);
      FUN_08040034(param_1,iVar6,3,bVar2);
      FUN_08040034(param_1,iVar6,3,bVar2 | 0x10);
      FUN_08040034(param_1,iVar6,3,bVar2 | 0x20);
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040518);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)(*piVar3 + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}


