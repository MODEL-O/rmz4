// undefined FUN_08122508(void)
// entry 0x8122508


undefined4 FUN_08122508(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  FUN_08002624(0x33);
  FUN_08002624(0x79);
  iVar2 = DAT_0812253c;
  *(undefined4 *)(DAT_0812253c + 0xc) = 1;
  iVar7 = param_1 + DAT_08122540;
  *(undefined1 *)(iVar7 + 2) = 0;
  *DAT_08122544 = 0;
  uVar4 = DAT_081225a8;
  iVar3 = *(int *)(iVar7 + 8);
  if (iVar3 == -1) {
    FUN_08001354();
  }
  else {
    if (iVar3 == DAT_08122554) {
      uVar4 = 0x900;
    }
    else {
      if (iVar3 != 0) {
        FUN_081126ac(param_1);
        puVar8 = (uint *)(DAT_0812268c + 0x168);
        uVar5 = *puVar8;
        if (uVar5 == *(uint *)(iVar7 + 4)) {
          return in_lr;
        }
        if (uVar5 != 0xffffffff) {
          FUN_08002a98(uVar5 & 0xffff);
          *puVar8 = 0xffffffff;
        }
        FUN_08002a88(*(undefined2 *)(iVar7 + 4));
        *puVar8 = *(uint *)(iVar7 + 4);
        return in_lr;
      }
      puVar6 = (undefined4 *)(iVar2 + DAT_081225a0);
      *(undefined4 *)(iVar2 + DAT_081225a4) = DAT_081225a8;
      *puVar6 = uVar4;
      if (*(char *)(*DAT_081225ac + 0x14) == '\0') {
        FUN_0801e878(1,iVar2 + DAT_081225b0);
        bVar1 = *(byte *)(DAT_081225b4 + 4);
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 4) == 0) {
            if ((bVar1 & 2) == 0) {
              *(undefined1 *)(DAT_0812262c + DAT_08122630) = 1;
            }
            else {
              *(undefined1 *)(DAT_08122608 + DAT_0812260c) = 3;
              *(undefined2 *)(param_1 + DAT_08122610 + 2) = 2;
            }
          }
          else {
            *(undefined1 *)(DAT_081225e0 + DAT_081225e4) = 0;
            *(undefined2 *)(param_1 + DAT_081225e8 + 2) = 3;
          }
        }
        else {
          *(undefined1 *)(DAT_081225b8 + DAT_081225bc) = 2;
          *(undefined2 *)(param_1 + DAT_081225c0 + 2) = 1;
        }
        *(undefined2 *)(param_1 + DAT_08122634) = 1;
        FUN_0801f124(1);
      }
      else {
        *(undefined2 *)(param_1 + DAT_08122654) = 0x11;
        FUN_0801f134(0x11,2);
      }
      uVar4 = 0x300;
    }
    FUN_081126ac(param_1,uVar4);
  }
  return in_lr;
}


