#ifndef DISCIPLINARY_H
#define DISCIPLINARY_H


class Disciplinary
{
    public:
    int getComplaint_ID()
    {
        return complaint_ID;
    }
    string getMeetingDate()
    {
        return MeetingDate;
    }
    string getDocumentName()
    {
        return DocumentName;
    }
    string getHR_Rep()
    {
        return HR_Rep;
    }
    void setComplaint_ID(int c)
    {
        complaint_ID = c;
    }
    void setMeetingDate(string d)
    {
        MeetingDate = d;
    }
    void setDocumentName(string d)
    {
        DocumentName = d;
    }
    void setHR_Rep(string h)
    {
        HR_Rep = h;
    }

    void ReadFile(ifstream& fileName);
    void WriteFile (ofstream& fileName, bool addNL);

    private:
     int complaint_ID;
     string MeetingDate;
     string DocumentName;
     string HR_Rep;

};

#endif // DISCIPLINARY_H
