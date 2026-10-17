// undefined FUN_0811bdfc(void)
// entry 0x811bdfc


undefined4 FUN_0811bdfc(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + DAT_0811be50);
  puVar2 = (undefined1 *)(param_1 + DAT_0811be54);
  *puVar2 = 0;
  puVar2[1] = 0;
  FUN_08001d30(DAT_0811be58,(*DAT_0811be5c & 0xc) << 0xc);
  FUN_08002208(DAT_0811be60,0);
  if (*(char *)(iVar4 + 0xf5) == -1) {
    FUN_080027b8(param_1 + DAT_0811bf70,DAT_0811bf74,0x17,0,0);
  }
  else {
    FUN_080027b8(param_1 + DAT_0811be64,DAT_0811be68,*(char *)(iVar4 + 0xf0) + '\x17',0,0);
  }
  FUN_08001f1c(param_1 + DAT_0811bf78,(*DAT_0811bf7c & 0x1f00) << 3,0x1000);
  FUN_08001d30(DAT_0811bf80,
               ((uint)*(ushort *)(DAT_0811bf84 + 0x84) - (uint)(*(ushort *)(DAT_0811bf80 + 6) >> 6))
               * 0x20 + 0x10000);
  FUN_08002208(DAT_0811bf88,
               ((uint)*(ushort *)(DAT_0811bf8c + 0x84) - (uint)*(byte *)(DAT_0811bf88 + 7)) * 0x20 +
               0x200);
  if (*(char *)(iVar4 + 0xf5) != -1) {
    iVar3 = param_1 + DAT_0811bf90;
    FUN_0810b708(param_1,iVar3,0,0);
    FUN_0810b708(param_1,iVar3,0,1);
    FUN_0810b708(param_1,iVar3,0,2);
    FUN_0810b708(param_1,iVar3,3,0);
    bVar1 = 0;
    if (*(byte *)(iVar4 + 0xf0) != 0) {
      iVar3 = param_1 + DAT_0811bf90;
      do {
        FUN_0810b708(param_1,iVar3,1,bVar1);
        FUN_0810b708(param_1,iVar3,1,bVar1 | 0x10);
        FUN_0810b708(param_1,iVar3,1,bVar1 | 0x20);
        bVar1 = bVar1 + 1;
      } while (bVar1 < *(byte *)(iVar4 + 0xf0));
    }
  }
  FUN_0810b708(param_1,param_1 + DAT_0811bf90,2,0);
  FUN_0800249c(0x41,0);
  *(undefined1 *)(param_1 + 2) = 2;
  return in_lr;
}


