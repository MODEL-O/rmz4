// undefined FUN_0807af28(void)
// entry 0x807af28


undefined4 FUN_0807af28(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_0807b050;
  iVar2 = DAT_0807b04c;
  iVar7 = DAT_0807b048;
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08001d30(DAT_0807b058,
                 ((uint)*DAT_0807b054 - (uint)(*(ushort *)(DAT_0807b058 + 6) >> 6)) * 0x20 + 0x10000
                );
    iVar4 = DAT_0807b060;
    iVar7 = iVar7 + DAT_0807b05c;
    FUN_08002208(iVar7,((uint)*DAT_0807b064 - (uint)*(byte *)(iVar7 + 7)) * 0x20 + 0x200);
    iVar5 = DAT_0807b068;
    FUN_08001d30(iVar2 + DAT_0807b068,
                 ((uint)*(ushort *)(iVar3 + 0x1a8) -
                 (uint)(*(ushort *)(iVar2 + DAT_0807b068 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar5 + DAT_0807b05c,
                 ((uint)*(ushort *)(iVar4 + 0x1a8) - (uint)*(byte *)(iVar5 + DAT_0807b05c + 7)) *
                 0x20 + 0x200);
    FUN_08001d30(DAT_0807b058,
                 ((uint)*DAT_0807b054 - (uint)(*(ushort *)(DAT_0807b058 + 6) >> 6)) * 0x20 + 0x10000
                );
    FUN_08002208(iVar7,((uint)*DAT_0807b064 - (uint)*(byte *)(iVar7 + 7)) * 0x20 + 0x200);
    FUN_08002b10(0x1a8);
    FUN_0801cf00(param_1,DAT_0807b06c);
    *(undefined4 *)(param_1 + 0x5c) = 0xffffffc0;
    *(undefined1 *)(param_1 + 0x12) = 99;
    *(undefined1 *)(param_1 + 0xda) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0xd5);
  if ((cVar1 == '\x01') || (cVar1 == -0x7f)) {
    *(char *)(param_1 + 0xd5) = '\0';
  }
  if (8 < *(byte *)(param_1 + 0xf)) {
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x0807b044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(PTR_PTR_0807b070 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar6;
}


