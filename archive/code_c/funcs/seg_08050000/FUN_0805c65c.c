// undefined FUN_0805c65c(void)
// entry 0x805c65c


undefined4 FUN_0805c65c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 auStack_14 [8];
  
  FUN_08129258(auStack_14,DAT_0805c734,6);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0805ee6c(param_1,auStack_14[(uint)*(byte *)(param_1 + 0x10) * 2]);
    *(undefined4 *)(param_1 + 0x60) = 0x280;
    *(undefined4 *)(param_1 + 0x68) = 0x20;
    *(uint *)(param_1 + 0x5c) =
         (uint)(*(int *)(param_1 + 0xb4) + DAT_0805c738 <= *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x58);
    uVar1 = FUN_0805f08c(param_1);
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805c740) * 4 +
                               DAT_0805c73c)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805c744) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar3 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       iVar3 * (((uint)*(byte *)(param_1 + 0x13) -
                 (*(int *)(param_1 + 100) - (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) >>
                 0x1f) & 1) * 2 + -1);
  if (*(byte *)(param_1 + 0x13) == 0) {
    iVar3 = iVar3 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (iVar3 < 0x20) {
      *(undefined4 *)(param_1 + 0x60) = 0x20;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1U & 1;
    }
  }
  else {
    iVar3 = iVar3 + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x280 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x280;
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
  }
  if (((*(ushort *)(DAT_0805c788 + 8) & 8) == 0) &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    FUN_0805ef70(param_1);
  }
  return in_lr;
}


