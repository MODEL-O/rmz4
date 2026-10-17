// undefined FUN_080864c8(void)
// entry 0x80864c8


undefined4 FUN_080864c8(int param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0808656c);
    FUN_08086a14(param_1,4);
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    uVar3 = FUN_0810d338(*(int *)(*DAT_08086570 + 0x54) - *(int *)(param_1 + 0x54),
                         (*(int *)(*DAT_08086570 + 0x58) + DAT_08086574) - *(int *)(param_1 + 0x58))
    ;
    iVar1 = DAT_08086578;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((uVar3 * 0x1000000 + 0x40000000 >> 0x17) + DAT_08086578) / 2;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uVar3 & 0xff) * 2 + iVar1) / 2;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  FUN_08086a48(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  return in_lr;
}


