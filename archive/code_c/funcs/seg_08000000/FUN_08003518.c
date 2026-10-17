// undefined FUN_08003518(void)
// entry 0x8003518


undefined4 FUN_08003518(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  undefined4 in_lr;
  
  iVar4 = *(byte *)((int)param_1 + 6) - 1;
  *(char *)((int)param_1 + 6) = (char)iVar4;
  iVar4 = iVar4 * 0x1000000;
  iVar5 = iVar4 >> 0x18;
  uVar2 = (undefined1)((uint)iVar4 >> 0x18);
  if (iVar5 == 0) {
    cVar3 = *(char *)((int)param_1 + 5);
    *(char *)((int)param_1 + 5) = cVar3 + '\x01';
    piVar7 = (int *)((uint)*(byte *)(param_1 + 1) * 4 + *param_1);
    puVar6 = (undefined1 *)(*(char *)((int)param_1 + 5) * 2 + *piVar7);
    cVar1 = puVar6[1];
    if (cVar1 != -1) {
      if (cVar1 == -2) {
        *(undefined1 *)((int)param_1 + 5) = *puVar6;
        *(undefined1 *)((int)param_1 + 7) = uVar2;
      }
      cVar3 = *(char *)(*(char *)((int)param_1 + 5) * 2 + *piVar7 + 1);
      *(char *)((int)param_1 + 6) = cVar3;
      *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + '\x01';
      cVar1 = *(char *)(*(char *)((int)param_1 + 5) * 2 +
                        *(int *)((uint)*(byte *)(param_1 + 1) * 4 + *param_1) + 1);
      if (cVar1 < '\0') {
        if (cVar3 != '\x02') {
          if (cVar3 == '\x01') {
            if (cVar1 == -1) {
              cVar3 = '\x03';
            }
            else {
              cVar3 = '\x04';
            }
          }
          else {
            cVar3 = '\x01';
          }
        }
        *(char *)((int)param_1 + 7) = cVar3;
      }
      *(char *)((int)param_1 + 5) = *(char *)((int)param_1 + 5) + -1;
      return in_lr;
    }
    *(char *)((int)param_1 + 5) = cVar3;
    *(undefined1 *)((int)param_1 + 6) = 1;
    uVar2 = 3;
  }
  else {
    if (*(char *)((int)param_1 + 7) == '\0') {
      return in_lr;
    }
    if (iVar5 == 2) {
      *(undefined1 *)((int)param_1 + 7) = uVar2;
      return in_lr;
    }
    if (iVar5 != 1) {
      return in_lr;
    }
    if (*(char *)(*(char *)((int)param_1 + 5) * 2 +
                  *(int *)((uint)*(byte *)(param_1 + 1) * 4 + *param_1) + 3) == -1) {
      uVar2 = 3;
    }
    else {
      uVar2 = 4;
    }
  }
  *(undefined1 *)((int)param_1 + 7) = uVar2;
  return in_lr;
}


