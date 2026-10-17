// undefined FUN_081113a4(void)
// entry 0x81113a4


undefined4 FUN_081113a4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 in_lr;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [8];
  
  local_48 = *DAT_081113ec;
  uStack_44 = DAT_081113ec[1];
  uStack_40 = DAT_081113ec[2];
  local_3c = DAT_081113ec[3];
  uStack_38 = DAT_081113ec[4];
  uStack_34 = DAT_081113ec[5];
  local_30 = DAT_081113ec[6];
  uStack_2c = DAT_081113ec[7];
  if (4 < *(byte *)(param_1 + 7)) {
    FUN_08111998(param_1,auStack_28,&local_48,local_30,*DAT_081113e8,DAT_081113e8[1],DAT_081113e8[2]
                 ,DAT_081113e8[3],DAT_081113e8[4],DAT_081113e8[5],DAT_081113e8[6],DAT_081113e8[7]);
    FUN_080025d8(0x89);
    cVar1 = *(char *)(param_1 + DAT_0811186c);
    if (cVar1 != '\0') {
      cVar4 = cVar1 + -1;
      *(char *)(param_1 + DAT_0811186c) = cVar4;
      iVar2 = DAT_08111870;
      *(char *)(DAT_08111870 + DAT_08111874) = cVar4;
      *(char *)(iVar2 + DAT_08111878) = cVar4;
      *(char *)(iVar2 + 0x400) = cVar4;
      if (cVar1 == '\x01') {
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined1 *)(param_1 + 6) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
      }
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x081113e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_081113f0 + (uint)*(byte *)(param_1 + 7) * 4))();
  return uVar3;
}


