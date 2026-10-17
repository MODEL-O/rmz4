// undefined FUN_0811edc8(void)
// entry 0x811edc8


undefined4 FUN_0811edc8(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + DAT_0811efc0);
  *(undefined2 *)(param_1 + 4) = 0;
  iVar7 = param_1 + DAT_0811efc4;
  *(undefined1 *)(iVar7 + 2) = 0;
  *(undefined1 *)(iVar7 + 3) = 0;
  *(undefined1 *)(iVar7 + 4) = 0;
  *(char *)(iVar7 + 5) = *(char *)(iVar6 + 0xf3) + *(char *)(iVar6 + 0xf2) + *(char *)(iVar6 + 0xf1)
  ;
  FUN_0811f20c(param_1);
  puVar1 = DAT_0811efc8;
  *DAT_0811efc8 = (ushort)DAT_0811efcc & *DAT_0811efc8 & (ushort)DAT_0811efd0 | 0x1300;
  puVar1[3] = (ushort)DAT_0811efd4;
  puVar1[8] = 0x100;
  puVar1[9] = 0;
  FUN_08001d30(DAT_0811efd8,0x4000);
  FUN_08002208(DAT_0811efdc,0);
  FUN_08001d30(DAT_0811efe0,(puVar1[3] & 0xc) * 0x1000);
  FUN_08002208(DAT_0811efe4,0);
  FUN_080027b8(param_1 + DAT_0811efe8,DAT_0811efec,*(char *)(iVar6 + 0xf0) + 'h',0,0);
  iVar7 = DAT_0811eff0;
  FUN_08001d30(DAT_0811eff0 + 0x528,
               ((uint)*(ushort *)(DAT_0811eff4 + 0x84) -
               (uint)(*(ushort *)(DAT_0811eff0 + 0x52e) >> 6)) * 0x20 + 0x10000);
  iVar3 = DAT_0811effc;
  iVar2 = DAT_0811eff8;
  FUN_08002208(DAT_0811eff8 + 0x528,
               ((uint)*(ushort *)(DAT_0811effc + 0x84) - (uint)*(byte *)(DAT_0811eff8 + 0x52f)) *
               0x20 + 0x200);
  iVar4 = DAT_0811f000;
  FUN_08001d30(iVar7 + DAT_0811f000,
               ((uint)*DAT_0811f004 - (uint)(*(ushort *)(iVar7 + DAT_0811f000 + 6) >> 6)) * 0x20 +
               0x10000);
  FUN_08002208(iVar4 + iVar2,
               ((uint)*(ushort *)(iVar3 + 0x86) - (uint)*(byte *)(iVar4 + iVar2 + 7)) * 0x20 + 0x200
              );
  iVar7 = param_1 + 0xdd0;
  FUN_0810b708(param_1,iVar7,0,0);
  FUN_0810b708(param_1,iVar7,0,1);
  FUN_0810b708(param_1,iVar7,0,2);
  bVar5 = 0;
  if (*(char *)(iVar6 + 0xf0) != '\0') {
    iVar7 = param_1 + 0xdd0;
    do {
      FUN_0810b708(param_1,iVar7,1,bVar5);
      FUN_0810b708(param_1,iVar7,1,bVar5 | 0x10);
      FUN_0810b708(param_1,iVar7,1,bVar5 | 0x20);
      bVar5 = bVar5 + 1;
    } while (bVar5 < *(byte *)(iVar6 + 0xf0));
  }
  iVar7 = param_1 + 0xdd0;
  FUN_0810b708(param_1,iVar7,2,1);
  FUN_0810b708(param_1,iVar7,4,0);
  FUN_0810b708(param_1,iVar7,3,0);
  FUN_0800249c(0x41,0);
  FUN_08001f1c(param_1 + DAT_0811f008,(*DAT_0811f00c & 0x1f00) << 3,0x1000);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_0811f010(param_1);
  return in_lr;
}


