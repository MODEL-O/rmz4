// undefined FUN_080a9d94(void)
// entry 0x80a9d94


undefined4 FUN_080a9d94(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080a9e04 + (uint)*(byte *)(param_1 + 0xbc) & 0xffff);
    if (*(char *)(param_1 + 0xb5) == '\x02') {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080a9b2c(param_1);
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  if (*(char *)(param_1 + 0xb5) == '\x02') {
    if ((10 < (int)(0x14 - (uint)*(byte *)(param_1 + 0x12))) &&
       ((*(byte *)(param_1 + 0x12) & 1) == 0)) {
      piVar3 = (int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *piVar3;
      iVar2 = *piVar3 * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *piVar3 = iVar2 >> 8;
    }
  }
  else {
    cVar1 = FUN_080a9b7c(param_1);
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  }
  if ((0 < *(int *)(param_1 + 0x60)) || (cVar1 = FUN_080a9cac(param_1), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


