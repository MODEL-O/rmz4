// undefined FUN_08054a10(void)
// entry 0x8054a10


undefined4 FUN_08054a10(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0xc0);
    if (*(int *)(param_1 + 0x54) == iVar3 + DAT_08054a30) {
      uVar2 = 1;
    }
    else if (*(int *)(param_1 + 0x54) == iVar3 + 0x7800) {
      uVar2 = 0;
    }
    else {
      uVar2 = *DAT_08054aa0 * DAT_08054aa4 + DAT_08054aa8;
      *DAT_08054aa0 = uVar2 & 0x7fffffff;
      uVar2 = (uVar2 & 0x7fffffff) >> 0x10 & 1;
    }
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0) + (uVar2 * 2 + -1) * 0x7800;
    FUN_0801cf00(param_1,0x2c00);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


