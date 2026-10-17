// undefined FUN_08033204(void)
// entry 0x8033204


undefined4 FUN_08033204(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x04') {
      return in_lr;
    }
    uVar2 = 0x4d00;
  }
  else {
    if (1 < bVar1) {
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    uVar2 = 0x4c00;
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x4c00) {
      FUN_0801cf00(param_1,0x4d00);
      *(undefined1 *)(param_1 + 0xf) = 2;
      goto LAB_08033254;
    }
  }
  FUN_0801cf00(param_1,uVar2);
LAB_08033254:
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


