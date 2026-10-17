// undefined FUN_080a9a98(void)
// entry 0x80a9a98


undefined4 FUN_080a9a98(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = FUN_08014948(param_1 + 0x54);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xb5) = 0;
    uVar3 = DAT_080a9ab8;
  }
  else {
    if ((*(char *)(param_1 + 0x10) == '\x01') &&
       (cVar1 = FUN_08014948(param_1 + 0x54), cVar1 == '\x03')) {
      *(undefined1 *)(param_1 + 0xb5) = 2;
      *(undefined4 *)(param_1 + 0x60) = DAT_080a9ae0;
      uVar2 = 0x14;
      goto LAB_080a9b1e;
    }
    if ((*(char *)(param_1 + 0x10) == '\0') &&
       (cVar1 = FUN_08014948(param_1 + 0x54), cVar1 == '\x04')) {
      *(undefined1 *)(param_1 + 0xb5) = 2;
      *(undefined4 *)(param_1 + 0x60) = DAT_080a9b0c;
      uVar2 = 0x14;
      goto LAB_080a9b1e;
    }
    *(undefined1 *)(param_1 + 0xb5) = 1;
    uVar3 = DAT_080a9b28;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar2 = 0xff;
LAB_080a9b1e:
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  return in_lr;
}


