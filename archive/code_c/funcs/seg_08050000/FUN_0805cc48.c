// undefined FUN_0805cc48(void)
// entry 0x805cc48


undefined4 FUN_0805cc48(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined1 auStack_20 [8];
  
  FUN_08129258(auStack_20,DAT_0805cd3c,6);
  bVar1 = *(byte *)(param_1 + 0xbb);
  cVar2 = *(char *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    piVar4 = (int *)(param_1 + 0xcc);
    if ((*(char *)(*piVar4 + 0xd) == '\x01') && (*(char *)(*piVar4 + 0xb4) == '\0')) {
      FUN_0805ee6c(param_1,auStack_20[(uint)*(byte *)(param_1 + 0x10) * 2]);
      *(undefined1 *)(*piVar4 + 0xb4) = 1;
      *(undefined1 *)(*piVar4 + 0xb5) = 1;
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       *(int *)((uint)*(ushort *)
                                       ((uint)*(byte *)(param_1 + 0xb8) * 2 + DAT_0805cd44) * 4 +
                               DAT_0805cd40)) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 + DAT_0805cd48) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x12) != '\0') {
    piVar4 = (int *)(param_1 + 0xcc);
    if ((*piVar4 != 0) && (1 < *(byte *)(*piVar4 + 0xc))) {
      *piVar4 = 0;
    }
    if ((*(char *)(param_1 + 0x73) == '\x03') && (*piVar4 == 0)) {
      bVar3 = cVar2 + 1;
      if (*(char *)(*(int *)((uint)bVar1 * 4 + DAT_0805cd4c) + (uint)bVar3) == -1) {
        *(undefined1 *)(param_1 + 0xe) = 3;
      }
      else {
        *(byte *)(param_1 + 0xbc) = bVar3;
        *(undefined1 *)(param_1 + 0xe) = 1;
      }
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


