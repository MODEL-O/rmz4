// undefined FUN_080b5498(void)
// entry 0x80b5498


undefined4 FUN_080b5498(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = FUN_0801fb14(DAT_080b54c4,param_1 + 0x54);
  if (uVar3 < 0x2001) {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      *(char *)(param_1 + 0xb5) = '\x01';
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  iVar4 = *(int *)(*DAT_080b54f8 + 0x54) - *(int *)(param_1 + 0x54);
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0x54) - *(int *)(*DAT_080b54f8 + 0x54);
  }
  cVar1 = FUN_08128fb8(iVar4 >> 8,0x30);
  if (cVar1 == '\0') {
    uVar2 = 2;
  }
  else if (cVar1 == '\x01') {
    uVar3 = *DAT_080b5520 * DAT_080b5524 + DAT_080b5528;
    *DAT_080b5520 = uVar3 & 0x7fffffff;
    if (((uVar3 & 0x7fffffff) >> 0x10 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb6) = 0;
      *(undefined1 *)(param_1 + 0xd) = 1;
      goto LAB_080b5542;
    }
    uVar2 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb6) = 0;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
LAB_080b5542:
  FUN_080b564c(param_1);
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


