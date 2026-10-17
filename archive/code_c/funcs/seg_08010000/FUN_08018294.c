// undefined FUN_08018294(void)
// entry 0x8018294


undefined4 FUN_08018294(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = DAT_080182bc;
  if ((*(ushort *)(DAT_080182bc + 0x14) & 1) == 0) {
    iVar4 = *DAT_080182e4;
    iVar3 = *(int *)(iVar4 + 0x54);
    if (DAT_080182e8 < iVar3) {
      if (DAT_08018310 < iVar3) {
        if ((DAT_08018330 < iVar3) || (*(int *)(iVar4 + 0x58) < 0x32001)) {
          iVar3 = *(int *)(*DAT_080182e4 + 0x54);
          uVar1 = DAT_0801834c;
          puVar2 = DAT_08018348;
          if (DAT_08018344 < iVar3) {
            if ((DAT_08018368 < iVar3) || (*(int *)(*DAT_080182e4 + 0x58) < 0x28001)) {
              if (DAT_08018390 < *(int *)(*DAT_080182e4 + 0x54)) {
                return in_lr;
              }
              uVar1 = DAT_0801839c;
              puVar2 = DAT_08018398;
              if (DAT_08018394 < *(int *)(*DAT_080182e4 + 0x58)) {
                return in_lr;
              }
            }
            else {
              uVar1 = 0x1fe000;
              puVar2 = DAT_0801836c;
            }
          }
        }
        else {
          uVar1 = 0x78000;
          puVar2 = (undefined4 *)(DAT_080182bc + 0x148);
        }
      }
      else {
        uVar1 = 0x5a000;
        puVar2 = (undefined4 *)(DAT_080182bc + 0x148);
      }
    }
    else if (DAT_080182ec < *(int *)(iVar4 + 0x58)) {
      uVar1 = 0xf000;
      puVar2 = (undefined4 *)(DAT_080182bc + 0x144);
    }
    else {
      uVar1 = 0x1e000;
      puVar2 = (undefined4 *)(DAT_080182bc + 0x144);
    }
  }
  else {
    *(undefined4 *)(DAT_080182bc + 0x144) = 0xf000;
    uVar1 = 0x3c0000;
    puVar2 = (undefined4 *)(iVar3 + 0x148);
  }
  *puVar2 = uVar1;
  return in_lr;
}


