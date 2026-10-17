// undefined FUN_080e0b78(void)
// entry 0x80e0b78


undefined4 FUN_080e0b78(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\x01') {
    FUN_0801cf00(param_1,DAT_080e0bd8);
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    iVar1 = DAT_080e0bdc;
    *(int *)(param_1 + 0x5c) = DAT_080e0bdc;
    *(int *)(param_1 + 0x60) = iVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(int *)(param_1 + 0x5c) = iVar1 * -0x100 >> 8;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = FUN_080e0cd4(param_1);
  if (cVar2 == '\x01') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e0be0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  FUN_080e0cbc(param_1);
  return in_lr;
}


