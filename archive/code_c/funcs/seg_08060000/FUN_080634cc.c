// undefined FUN_080634cc(void)
// entry 0x80634cc


undefined4 FUN_080634cc(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08065a94(param_1,0xb);
    iVar5 = (bVar3 >> 4 & 1) * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar5 * 0x200;
    uVar2 = FUN_08128fb8((*(int *)(*(int *)(param_1 + 0xc4) + 0x54) + iVar5 * -0xa00) -
                         *(int *)(param_1 + 0x54));
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  puVar1 = DAT_08063590;
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       DAT_08063590[*(ushort *)((uint)*(byte *)(param_1 + 0xb4) * 2 + DAT_08063594)]
                       ) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 + DAT_08063598))
                              + (int)*(char *)(param_1 + 0x71)) * 0x18);
  FUN_08005784(param_1 + 0x74,*(undefined4 *)*puVar1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar3;
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 5;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


