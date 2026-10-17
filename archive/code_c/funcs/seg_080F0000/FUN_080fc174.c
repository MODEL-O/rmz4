// undefined FUN_080fc174(void)
// entry 0x80fc174


undefined4 FUN_080fc174(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (iVar3 != 0) {
      if ((*(char *)(iVar3 + 0xd) == '\x03') && (*(int *)(iVar3 + 0x58) == *(int *)(param_1 + 0xb4))
         ) {
        *(undefined1 *)(param_1 + 0x12) = 0x40;
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      if (*(int *)(param_1 + 0xc0) != 0) {
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar3 + 0x58);
      }
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x12);
    if ((bVar1 & 3) == 0) {
      iVar3 = *(int *)(param_1 + 0xb8);
      iVar4 = 0x200;
    }
    else {
      iVar3 = *(int *)(param_1 + 0xb8);
      iVar4 = 0x100;
    }
    *(int *)(param_1 + 0x68) = iVar3 + iVar4;
    *(byte *)(param_1 + 0x12) = bVar1 - 1;
    if (bVar1 == 0) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fc200);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_080fc218(param_1);
      return in_lr;
    }
  }
  FUN_0801cff0(param_1);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return in_lr;
}


