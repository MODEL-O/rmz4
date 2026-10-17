// undefined FUN_0811f770(void)
// entry 0x811f770


undefined4 FUN_0811f770(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + DAT_0811f7e0);
  if (*(char *)(param_1 + 3) == '\0') {
    bVar1 = FUN_08129050(*(byte *)(iVar2 + 0xf6) + 1,3);
    *(byte *)(iVar2 + 0xf6) = bVar1;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  FUN_0810d85c((uint)*(ushort *)
                      (((uint)*(byte *)(iVar2 + 0xf0) * 3 + *(byte *)(iVar2 + 0xf6) + 800) * 2 +
                      DAT_0811f7e4) + DAT_0811f7e8,0x11,7);
  if ((*(ushort *)(DAT_0811f7ec + 4) & 3) != 0) {
    FUN_08002b10(2);
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return in_lr;
}


