// undefined FUN_08056018(void)
// entry 0x8056018


undefined4 FUN_08056018(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080560d4);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_080560dc) * 4 + DAT_080560d8)) * 0x18 + DAT_080560e0);
  piVar4 = (int *)(param_1 + 0xbc);
  iVar2 = *piVar4 + *(int *)(param_1 + 0x60);
  *piVar4 = iVar2;
  iVar1 = DAT_080560e4;
  *(int *)(param_1 + 0x58) =
       iVar2 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + DAT_080560e4) * 2;
  iVar3 = *(int *)(param_1 + 0x5c) + DAT_080560e8;
  if (iVar2 <= iVar3) {
    *piVar4 = iVar3;
    *(int *)(param_1 + 0x58) = iVar3 + *(short *)((uint)*(byte *)(param_1 + 0xb5) * 2 + iVar1) * 2;
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


