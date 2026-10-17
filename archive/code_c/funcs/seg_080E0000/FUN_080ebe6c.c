// undefined FUN_080ebe6c(void)
// entry 0x80ebe6c


undefined4 FUN_080ebe6c(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  if (*(short *)(*DAT_080ebf58 + 10) < 8) {
LAB_080ebee2:
    if (iVar4 != 0) goto LAB_080ebf42;
  }
  else {
    iVar4 = FUN_08005500(*DAT_080ebf58);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x25) = 0x1e;
      iVar1 = DAT_080ebf5c;
      *(undefined1 *)(iVar4 + 9) = 6;
      *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x18);
      *(undefined2 *)(iVar4 + 0x20) = 0;
      *(undefined1 *)(iVar4 + 0x22) = 0;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) | 0x10;
      *(undefined1 *)(iVar4 + 0x1d) = *(undefined1 *)(iVar4 + 0x1c);
      uVar2 = DAT_080ebf60;
      *(uint *)(iVar4 + 0x54) = (param_2 & DAT_080ebf60) + 0x800;
      *(uint *)(iVar4 + 0x58) = (param_3 & uVar2) + 0x1000;
      *(undefined1 *)(iVar4 + 0x10) = *(undefined1 *)(param_1 + 0x10);
      cVar3 = *(char *)(param_1 + 0x11);
      if (cVar3 != -1) {
        cVar3 = cVar3 + '\x01';
      }
      *(char *)(iVar4 + 0x11) = cVar3;
      goto LAB_080ebee2;
    }
  }
  iVar4 = FUN_08005500(*DAT_080ebf64);
  if (iVar4 == 0) {
    return in_lr;
  }
  *(undefined1 *)(iVar4 + 0x25) = 1;
  iVar1 = DAT_080ebf68;
  *(undefined1 *)(iVar4 + 9) = 0x22;
  *(undefined4 *)(iVar4 + 0x14) = **(undefined4 **)(iVar1 + 0x88);
  *(undefined2 *)(iVar4 + 0x20) = 0;
  *(undefined1 *)(iVar4 + 0x22) = 0;
  uVar2 = DAT_080ebf60;
  *(uint *)(iVar4 + 0x54) = (param_2 & DAT_080ebf60) + 0x800;
  *(uint *)(iVar4 + 0x58) = (param_3 & uVar2) + 0x1000;
  *(undefined1 *)(iVar4 + 0x10) = *(undefined1 *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x11);
  if (cVar3 != -1) {
    cVar3 = cVar3 + '\x01';
  }
  *(char *)(iVar4 + 0x11) = cVar3;
  if (iVar4 == 0) {
    return in_lr;
  }
LAB_080ebf42:
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_0800c6d8(param_2,param_3);
  }
  return in_lr;
}


