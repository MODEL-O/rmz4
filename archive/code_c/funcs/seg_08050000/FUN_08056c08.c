// undefined FUN_08056c08(void)
// entry 0x8056c08


undefined4 FUN_08056c08(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xf8);
    FUN_0801cf00(param_1,DAT_08056cd0);
    *(byte *)(param_1 + 0x12) = ((bVar1 >> 4 & 1) + 1) * -0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08056cd8) * 4 + DAT_08056cd4)) * 0x18 + DAT_08056cdc);
  iVar2 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar2;
  if (*(int *)(param_1 + 0x68) < iVar2) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x68);
  }
  iVar2 = (int)*(short *)((*(byte *)(param_1 + 0x12) + 0x40 & 0xff) * 2 + DAT_08056ce0) *
          *(int *)(param_1 + 0x5c);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  iVar2 = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  *(int *)(param_1 + 0x54) = iVar2;
  if (0x28000 < (iVar2 - *(int *)(param_1 + 0xcc)) + 0x5000U) {
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


