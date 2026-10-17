// undefined FUN_0805b2ac(void)
// entry 0x805b2ac


undefined4 FUN_0805b2ac(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xbf);
    FUN_08005784(param_1 + 0x74,DAT_0805b384);
    FUN_0801cf00(param_1,DAT_0805b388);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (*(char *)(param_1 + 0x13) != '\0') {
      FUN_08001d30(DAT_0805b38c,
                   ((uint)*(ushort *)(DAT_0805b390 + 0x92) -
                   (uint)(*(ushort *)(DAT_0805b38c + 6) >> 6)) * 0x20 + 0x10000);
      FUN_08002208(DAT_0805b394,
                   ((uint)*(ushort *)(DAT_0805b398 + 0x92) - (uint)*(byte *)(DAT_0805b394 + 7)) *
                   0x20 + 0x200);
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + DAT_0805b39c;
      if ((*(int *)(param_1 + 200) == 0) || (*(char *)(param_1 + 0xbf) != '\x05')) {
        iVar1 = FUN_080c2920(param_1,&local_18,1);
        *(int *)(param_1 + 200) = iVar1;
        cVar2 = -1;
        if (iVar1 != 0) {
          cVar2 = '\x05';
        }
        *(char *)(param_1 + 0xbf) = cVar2;
      }
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


